//
// Generated By: dol2asm
// Translation Unit: JUTDirectFile
//

#include "JSystem/JUtility/JUTDirectFile.h"
#include "dolphin/types.h"
#include "dolphin/os/OSInterrupt.h"
#include "global.h"

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 802E8730-802E87F8 2E3070 00C8+00 1/1 0/0 0/0 .text            fetch32byte__13JUTDirectFileFv */
int JUTDirectFile::fetch32byte() {
	mToRead = mLength - ALIGN_PREV(mPos, DVD_MIN_TRANSFER_SIZE);

	if (mToRead > JUTDF_BUFSIZE) {
		mToRead = JUTDF_BUFSIZE;
	}
	int interrupts = OSEnableInterrupts();
	int readRes    = DVDReadAsyncPrio(&mFileInfo, mSectorStart, ALIGN_NEXT(mToRead, DVD_MIN_TRANSFER_SIZE),
                               ALIGN_PREV(mPos, DVD_MIN_TRANSFER_SIZE), NULL, 2);
	OSRestoreInterrupts(interrupts);
	if (!readRes) {
		return -1;
	} else {
		interrupts = OSEnableInterrupts();
		while (DVDGetCommandBlockStatus(&mFileInfo.block)) {
			;
		}
		OSRestoreInterrupts(interrupts);
		return mToRead;
	}
}

/* 802E87F8-802E881C 2E3138 0024+00 0/0 1/1 0/0 .text            __ct__13JUTDirectFileFv */
JUTDirectFile::JUTDirectFile() {
	mLength      = 0;
	mPos         = 0;
	mToRead      = 0;
	mSectorStart = (u8*)ALIGN_NEXT((u32)mBuffer, DVD_MIN_TRANSFER_SIZE);
	mIsOpen      = false;
}


/* 802E881C-802E8860 2E315C 0044+00 0/0 1/1 0/0 .text            __dt__13JUTDirectFileFv */
JUTDirectFile::~JUTDirectFile() {
    mIsOpen = false;
}

/* 802E8860-802E88FC 2E31A0 009C+00 0/0 1/1 0/0 .text            fopen__13JUTDirectFileFPCc */
bool JUTDirectFile::fopen(const char* filename) {
	if (!filename) {
		return false;
	}

	int interrupts = OSEnableInterrupts();
	int dvdRes     = DVDOpen(const_cast<char*>(filename), &mFileInfo);
	OSRestoreInterrupts(interrupts);

	if (!dvdRes) {
		mIsOpen = false;
		return false;
	}

	int interrupts2 = OSEnableInterrupts();
	mLength         = mFileInfo.length;
	OSRestoreInterrupts(interrupts2);

	mPos    = 0;
	mIsOpen = true;
	return true;
}

/* 802E88FC-802E8958 2E323C 005C+00 0/0 1/1 0/0 .text            fclose__13JUTDirectFileFv */
void JUTDirectFile::fclose() {
	if (mIsOpen) {
		int interrupts = OSEnableInterrupts();
		DVDClose(&mFileInfo);
		OSRestoreInterrupts(interrupts);
		mIsOpen = false;
	}
}

/* 802E8958-802E8B08 2E3298 01B0+00 0/0 1/1 0/0 .text            fgets__13JUTDirectFileFPvi */
int JUTDirectFile::fgets(void* buf, int len) {
	// if file isn't open, return error (-1).
	if (!mIsOpen) {
		return -1;
	}

	// if desired length to get is 0, get... 0 bytes.
	if (len == 0) {
		return 0;
	}

	// if desired length to get is 1, return 1.
	// (final byte gotten is always 0, so len 1 is pointless).
	if (len == 1) {
		return 1;
	}

	// if buffer to read into doesn't exist, return error.
	if (!buf) {
		return -1;
	}

	// if we're already beyond the file length, return error.
	if (mPos >= mLength) {
		return -1;
	}

	int readMax;
	u8* byteBuf   = (u8*)buf;
	int readCount = 0;
	readMax       = len - 1; // desired bytes of data to get (last value is then 0).

	while (mPos < mLength) {
		// if there's nothing left to read, return error.
		if (mToRead == 0 && fetch32byte() < 0) {
			return -1;
		}

		// read in each chunk.
		u32 currPos   = mPos & (JUTDF_BUFSIZE - 1);
		u32 chunkSize = (mToRead - currPos);
		if (readCount + chunkSize > readMax) {
			chunkSize = len - readCount - 1;
		}

		BOOL isAtEnd = FALSE;
		for (int i = 0; i < chunkSize; i++) {
			u8 byte = mSectorStart[currPos];
			currPos++;
			*byteBuf++ = byte;

			// if we hit the end of a line, stop reading.
			if (byte == '\n') {
				isAtEnd   = TRUE;
				chunkSize = i + 1;
				break;
			}
		}

		// if we exceed the buffer size, stop reading.
		if (currPos >= JUTDF_BUFSIZE) {
			mToRead = 0;
		}

		// if we hit the end of a line, set final byte to 0 and stop reading.
		if (isAtEnd == TRUE) {
			*byteBuf = 0;
			mPos += chunkSize;
			readCount += chunkSize;
			break;
		}

		// we should have read the full chunkSize, so update count/pos.
		mPos += chunkSize;
		readCount += chunkSize;

		// if we're at (or beyond) our desired length, set final byte to 0 and stop reading.
		if (readCount >= readMax) {
			*byteBuf = 0;
			break;
		}
	}

	// if got to the end of the data, set final byte to 0.
	if (mPos >= mLength) {
		*byteBuf = 0;
	}

	return readCount;
}
