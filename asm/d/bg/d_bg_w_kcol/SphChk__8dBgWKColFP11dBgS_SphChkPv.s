lbl_800824EC:
/* 800824EC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 800824F0  7C 08 02 A6 */	mflr r0
/* 800824F4  90 01 01 24 */	stw r0, 0x124(r1)
/* 800824F8  39 61 01 20 */	addi r11, r1, 0x120
/* 800824FC  48 2D FC A5 */	bl _savegpr_14
/* 80082500  7C 6F 1B 78 */	mr r15, r3
/* 80082504  7C 90 23 78 */	mr r16, r4
/* 80082508  90 A1 00 08 */	stw r5, 8(r1)
/* 8008250C  7E 03 83 78 */	mr r3, r16
/* 80082510  38 81 00 48 */	addi r4, r1, 0x48
/* 80082514  38 A1 00 3C */	addi r5, r1, 0x3c
/* 80082518  48 1E D2 55 */	bl GetMinMaxCube__8cM3dGSphCFR4cXyzR4cXyz
/* 8008251C  38 61 00 48 */	addi r3, r1, 0x48
/* 80082520  80 8F 00 18 */	lwz r4, 0x18(r15)
/* 80082524  38 84 00 14 */	addi r4, r4, 0x14
/* 80082528  7C 65 1B 78 */	mr r5, r3
/* 8008252C  48 2C 4B 89 */	bl PSVECSubtract
/* 80082530  38 61 00 3C */	addi r3, r1, 0x3c
/* 80082534  80 8F 00 18 */	lwz r4, 0x18(r15)
/* 80082538  38 84 00 14 */	addi r4, r4, 0x14
/* 8008253C  7C 65 1B 78 */	mr r5, r3
/* 80082540  48 2C 4B 75 */	bl PSVECSubtract
/* 80082544  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 80082548  C0 42 8D 20 */	lfs f2, lit_4189(r2)
/* 8008254C  EC 20 10 28 */	fsubs f1, f0, f2
/* 80082550  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80082554  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80082558  EC 00 10 28 */	fsubs f0, f0, f2
/* 8008255C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80082560  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80082564  EC 00 10 28 */	fsubs f0, f0, f2
/* 80082568  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8008256C  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 80082570  EC 00 10 2A */	fadds f0, f0, f2
/* 80082574  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80082578  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8008257C  EC 00 10 2A */	fadds f0, f0, f2
/* 80082580  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80082584  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80082588  EC 00 10 2A */	fadds f0, f0, f2
/* 8008258C  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80082590  FC 00 08 1E */	fctiwz f0, f1
/* 80082594  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80082598  83 C1 00 BC */	lwz r30, 0xbc(r1)
/* 8008259C  2C 1E 00 00 */	cmpwi r30, 0
/* 800825A0  40 80 00 08 */	bge lbl_800825A8
/* 800825A4  3B C0 00 00 */	li r30, 0
lbl_800825A8:
/* 800825A8  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 800825AC  FC 00 00 1E */	fctiwz f0, f0
/* 800825B0  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 800825B4  83 81 00 C4 */	lwz r28, 0xc4(r1)
/* 800825B8  80 6F 00 18 */	lwz r3, 0x18(r15)
/* 800825BC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 800825C0  7C 00 00 F8 */	nor r0, r0, r0
/* 800825C4  7C 1C 00 00 */	cmpw r28, r0
/* 800825C8  40 81 00 08 */	ble lbl_800825D0
/* 800825CC  7C 1C 03 78 */	mr r28, r0
lbl_800825D0:
/* 800825D0  7C 1E E0 00 */	cmpw r30, r28
/* 800825D4  41 80 00 0C */	blt lbl_800825E0
/* 800825D8  38 60 00 00 */	li r3, 0
/* 800825DC  48 00 03 B8 */	b lbl_80082994
lbl_800825E0:
/* 800825E0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 800825E4  FC 00 00 1E */	fctiwz f0, f0
/* 800825E8  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 800825EC  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 800825F0  2C 1D 00 00 */	cmpwi r29, 0
/* 800825F4  40 80 00 08 */	bge lbl_800825FC
/* 800825F8  3B A0 00 00 */	li r29, 0
lbl_800825FC:
/* 800825FC  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80082600  FC 00 00 1E */	fctiwz f0, f0
/* 80082604  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80082608  83 61 00 BC */	lwz r27, 0xbc(r1)
/* 8008260C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80082610  7C 00 00 F8 */	nor r0, r0, r0
/* 80082614  7C 1B 00 00 */	cmpw r27, r0
/* 80082618  40 81 00 08 */	ble lbl_80082620
/* 8008261C  7C 1B 03 78 */	mr r27, r0
lbl_80082620:
/* 80082620  7C 1D D8 00 */	cmpw r29, r27
/* 80082624  41 80 00 0C */	blt lbl_80082630
/* 80082628  38 60 00 00 */	li r3, 0
/* 8008262C  48 00 03 68 */	b lbl_80082994
lbl_80082630:
/* 80082630  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 80082634  FC 00 00 1E */	fctiwz f0, f0
/* 80082638  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 8008263C  80 81 00 C4 */	lwz r4, 0xc4(r1)
/* 80082640  2C 04 00 00 */	cmpwi r4, 0
/* 80082644  40 80 00 08 */	bge lbl_8008264C
/* 80082648  38 80 00 00 */	li r4, 0
lbl_8008264C:
/* 8008264C  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 80082650  FC 00 00 1E */	fctiwz f0, f0
/* 80082654  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80082658  83 41 00 BC */	lwz r26, 0xbc(r1)
/* 8008265C  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80082660  7C 00 00 F8 */	nor r0, r0, r0
/* 80082664  7C 1A 00 00 */	cmpw r26, r0
/* 80082668  40 81 00 08 */	ble lbl_80082670
/* 8008266C  7C 1A 03 78 */	mr r26, r0
lbl_80082670:
/* 80082670  7C 04 D0 00 */	cmpw r4, r26
/* 80082674  41 80 00 0C */	blt lbl_80082680
/* 80082678  38 60 00 00 */	li r3, 0
/* 8008267C  48 00 03 18 */	b lbl_80082994
lbl_80082680:
/* 80082680  39 C0 00 00 */	li r14, 0
/* 80082684  3A E0 00 00 */	li r23, 0
/* 80082688  3A C0 00 00 */	li r22, 0
/* 8008268C  7C 95 23 78 */	mr r21, r4
/* 80082690  3C 60 80 42 */	lis r3, vtx_tbl_5950@ha /* 0x80425384@ha */
/* 80082694  3B E3 53 84 */	addi r31, r3, vtx_tbl_5950@l /* 0x80425384@l */
lbl_80082698:
/* 80082698  3C 60 00 0F */	lis r3, 0x000F /* 0x000F4240@ha */
/* 8008269C  3B 03 42 40 */	addi r24, r3, 0x4240 /* 0x000F4240@l */
/* 800826A0  7F B4 EB 78 */	mr r20, r29
lbl_800826A4:
/* 800826A4  3C 60 00 0F */	lis r3, 0x000F /* 0x000F4240@ha */
/* 800826A8  3B 23 42 40 */	addi r25, r3, 0x4240 /* 0x000F4240@l */
/* 800826AC  38 00 00 00 */	li r0, 0
/* 800826B0  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 800826B4  7F D3 F3 78 */	mr r19, r30
lbl_800826B8:
/* 800826B8  81 0F 00 18 */	lwz r8, 0x18(r15)
/* 800826BC  80 68 00 0C */	lwz r3, 0xc(r8)
/* 800826C0  80 88 00 2C */	lwz r4, 0x2c(r8)
/* 800826C4  7E 67 24 30 */	srw r7, r19, r4
/* 800826C8  7E A5 24 30 */	srw r5, r21, r4
/* 800826CC  80 08 00 34 */	lwz r0, 0x34(r8)
/* 800826D0  7C A6 00 30 */	slw r6, r5, r0
/* 800826D4  7E 85 24 30 */	srw r5, r20, r4
/* 800826D8  80 08 00 30 */	lwz r0, 0x30(r8)
/* 800826DC  7C A0 00 30 */	slw r0, r5, r0
/* 800826E0  7C C0 03 78 */	or r0, r6, r0
/* 800826E4  7C E0 03 78 */	or r0, r7, r0
/* 800826E8  54 05 10 3A */	slwi r5, r0, 2
/* 800826EC  48 00 00 28 */	b lbl_80082714
lbl_800826F0:
/* 800826F0  7C 60 2A 14 */	add r3, r0, r5
/* 800826F4  38 84 FF FF */	addi r4, r4, -1
/* 800826F8  7E 66 24 30 */	srw r6, r19, r4
/* 800826FC  7E A5 24 30 */	srw r5, r21, r4
/* 80082700  7E 80 24 30 */	srw r0, r20, r4
/* 80082704  54 00 0F BC */	rlwinm r0, r0, 1, 0x1e, 0x1e
/* 80082708  50 A0 17 7A */	rlwimi r0, r5, 2, 0x1d, 0x1d
/* 8008270C  50 C0 07 FE */	rlwimi r0, r6, 0, 0x1f, 0x1f
/* 80082710  54 05 10 3A */	slwi r5, r0, 2
lbl_80082714:
/* 80082714  7C 60 1B 78 */	mr r0, r3
/* 80082718  7C A3 28 2E */	lwzx r5, r3, r5
/* 8008271C  2C 05 00 00 */	cmpwi r5, 0
/* 80082720  40 80 FF D0 */	bge lbl_800826F0
/* 80082724  54 A0 00 7E */	clrlwi r0, r5, 1
/* 80082728  7E 43 02 14 */	add r18, r3, r0
/* 8008272C  38 00 00 01 */	li r0, 1
/* 80082730  7C 03 20 30 */	slw r3, r0, r4
/* 80082734  38 A3 FF FF */	addi r5, r3, -1
/* 80082738  7E 60 28 38 */	and r0, r19, r5
/* 8008273C  7C 00 18 50 */	subf r0, r0, r3
/* 80082740  90 01 00 CC */	stw r0, 0xcc(r1)
/* 80082744  7E 80 28 38 */	and r0, r20, r5
/* 80082748  7C 80 18 50 */	subf r4, r0, r3
/* 8008274C  7E A0 28 38 */	and r0, r21, r5
/* 80082750  7C 00 18 50 */	subf r0, r0, r3
/* 80082754  7C 00 C0 00 */	cmpw r0, r24
/* 80082758  40 80 00 08 */	bge lbl_80082760
/* 8008275C  7C 18 03 78 */	mr r24, r0
lbl_80082760:
/* 80082760  7C 04 C8 00 */	cmpw r4, r25
/* 80082764  40 80 00 08 */	bge lbl_8008276C
/* 80082768  7C 99 23 78 */	mr r25, r4
lbl_8008276C:
/* 8008276C  80 01 00 C8 */	lwz r0, 0xc8(r1)
/* 80082770  7C 04 00 00 */	cmpw r4, r0
/* 80082774  40 81 00 18 */	ble lbl_8008278C
/* 80082778  A0 12 00 02 */	lhz r0, 2(r18)
/* 8008277C  28 00 00 00 */	cmplwi r0, 0
/* 80082780  41 82 00 0C */	beq lbl_8008278C
/* 80082784  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 80082788  7E 4E 93 78 */	mr r14, r18
lbl_8008278C:
/* 8008278C  7C 12 B8 40 */	cmplw r18, r23
/* 80082790  41 82 01 D4 */	beq lbl_80082964
/* 80082794  48 00 01 C4 */	b lbl_80082958
lbl_80082798:
/* 80082798  80 CF 00 18 */	lwz r6, 0x18(r15)
/* 8008279C  80 66 00 08 */	lwz r3, 8(r6)
/* 800827A0  A0 92 00 00 */	lhz r4, 0(r18)
/* 800827A4  54 80 20 36 */	slwi r0, r4, 4
/* 800827A8  7C A3 02 14 */	add r5, r3, r0
/* 800827AC  80 66 00 04 */	lwz r3, 4(r6)
/* 800827B0  A0 05 00 06 */	lhz r0, 6(r5)
/* 800827B4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 800827B8  7E 23 02 14 */	add r17, r3, r0
/* 800827BC  7D E3 7B 78 */	mr r3, r15
/* 800827C0  38 A1 00 68 */	addi r5, r1, 0x68
/* 800827C4  4B FF C3 AD */	bl getPolyCode__8dBgWKColCFiP5dBgPc
/* 800827C8  C0 11 00 00 */	lfs f0, 0(r17)
/* 800827CC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 800827D0  C0 11 00 04 */	lfs f0, 4(r17)
/* 800827D4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 800827D8  C0 11 00 08 */	lfs f0, 8(r17)
/* 800827DC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 800827E0  7D E3 7B 78 */	mr r3, r15
/* 800827E4  38 81 00 68 */	addi r4, r1, 0x68
/* 800827E8  80 B0 00 24 */	lwz r5, 0x24(r16)
/* 800827EC  80 D0 00 28 */	lwz r6, 0x28(r16)
/* 800827F0  38 E1 00 30 */	addi r7, r1, 0x30
/* 800827F4  4B FF C3 D1 */	bl chkPolyThrough__8dBgWKColCFP5dBgPcP16cBgS_PolyPassChkP15cBgS_GrpPassChkR4cXyz
/* 800827F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800827FC  40 82 01 5C */	bne lbl_80082958
/* 80082800  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha /* 0x803A37C0@ha */
/* 80082804  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l /* 0x803A37C0@l */
/* 80082808  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8008280C  3C 60 80 3B */	lis r3, __vt__8cM3dGTri@ha /* 0x803ABB84@ha */
/* 80082810  38 03 BB 84 */	addi r0, r3, __vt__8cM3dGTri@l /* 0x803ABB84@l */
/* 80082814  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80082818  7D E3 7B 78 */	mr r3, r15
/* 8008281C  A0 92 00 00 */	lhz r4, 0(r18)
/* 80082820  38 A1 00 24 */	addi r5, r1, 0x24
/* 80082824  38 C1 00 18 */	addi r6, r1, 0x18
/* 80082828  38 E1 00 0C */	addi r7, r1, 0xc
/* 8008282C  4B FF C1 79 */	bl GetTriPnt__8dBgWKColCFiP3VecP3VecP3Vec
/* 80082830  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80082834  40 82 00 20 */	bne lbl_80082854
/* 80082838  3C 60 80 3B */	lis r3, __vt__8cM3dGTri@ha /* 0x803ABB84@ha */
/* 8008283C  38 03 BB 84 */	addi r0, r3, __vt__8cM3dGTri@l /* 0x803ABB84@l */
/* 80082840  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80082844  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha /* 0x803A37C0@ha */
/* 80082848  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l /* 0x803A37C0@l */
/* 8008284C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80082850  48 00 01 08 */	b lbl_80082958
lbl_80082854:
/* 80082854  38 61 00 7C */	addi r3, r1, 0x7c
/* 80082858  38 81 00 24 */	addi r4, r1, 0x24
/* 8008285C  38 A1 00 18 */	addi r5, r1, 0x18
/* 80082860  38 C1 00 0C */	addi r6, r1, 0xc
/* 80082864  7E 27 8B 78 */	mr r7, r17
/* 80082868  48 1E D0 61 */	bl set__8cM3dGTriFPC3VecPC3VecPC3VecPC3Vec
/* 8008286C  7E 03 83 78 */	mr r3, r16
/* 80082870  38 81 00 7C */	addi r4, r1, 0x7c
/* 80082874  38 A0 00 00 */	li r5, 0
/* 80082878  48 1E 96 8D */	bl cM3d_Cross_SphTri__FPC8cM3dGSphPC8cM3dGTriP3Vec
/* 8008287C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80082880  41 82 00 C0 */	beq lbl_80082940
/* 80082884  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80082888  3C 60 80 42 */	lis r3, vtx_tbl_5950@ha /* 0x80425384@ha */
/* 8008288C  38 83 53 84 */	addi r4, r3, vtx_tbl_5950@l /* 0x80425384@l */
/* 80082890  D0 04 00 00 */	stfs f0, 0(r4)
/* 80082894  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80082898  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8008289C  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 800828A0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 800828A4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 800828A8  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 800828AC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 800828B0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 800828B4  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 800828B8  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 800828BC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 800828C0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 800828C4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800828C8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 800828CC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 800828D0  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 800828D4  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha /* 0x803A37C0@ha */
/* 800828D8  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l /* 0x803A37C0@l */
/* 800828DC  90 01 00 64 */	stw r0, 0x64(r1)
/* 800828E0  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 800828E4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 800828E8  C0 01 00 80 */	lfs f0, 0x80(r1)
/* 800828EC  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 800828F0  C0 01 00 84 */	lfs f0, 0x84(r1)
/* 800828F4  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 800828F8  C0 01 00 88 */	lfs f0, 0x88(r1)
/* 800828FC  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80082900  7E 03 83 78 */	mr r3, r16
/* 80082904  38 A0 00 00 */	li r5, 0
/* 80082908  38 C0 00 01 */	li r6, 1
/* 8008290C  38 E0 00 02 */	li r7, 2
/* 80082910  39 01 00 54 */	addi r8, r1, 0x54
/* 80082914  81 21 00 08 */	lwz r9, 8(r1)
/* 80082918  81 90 00 50 */	lwz r12, 0x50(r16)
/* 8008291C  7D 89 03 A6 */	mtctr r12
/* 80082920  4E 80 04 21 */	bctrl 
/* 80082924  38 70 00 14 */	addi r3, r16, 0x14
/* 80082928  A0 92 00 00 */	lhz r4, 0(r18)
/* 8008292C  48 1E 58 79 */	bl SetPolyIndex__13cBgS_PolyInfoFi
/* 80082930  3A C0 00 01 */	li r22, 1
/* 80082934  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha /* 0x803A37C0@ha */
/* 80082938  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l /* 0x803A37C0@l */
/* 8008293C  90 01 00 64 */	stw r0, 0x64(r1)
lbl_80082940:
/* 80082940  3C 60 80 3B */	lis r3, __vt__8cM3dGTri@ha /* 0x803ABB84@ha */
/* 80082944  38 03 BB 84 */	addi r0, r3, __vt__8cM3dGTri@l /* 0x803ABB84@l */
/* 80082948  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8008294C  3C 60 80 3A */	lis r3, __vt__8cM3dGPla@ha /* 0x803A37C0@ha */
/* 80082950  38 03 37 C0 */	addi r0, r3, __vt__8cM3dGPla@l /* 0x803A37C0@l */
/* 80082954  90 01 00 8C */	stw r0, 0x8c(r1)
lbl_80082958:
/* 80082958  A4 12 00 02 */	lhzu r0, 2(r18)
/* 8008295C  28 00 00 00 */	cmplwi r0, 0
/* 80082960  40 82 FE 38 */	bne lbl_80082798
lbl_80082964:
/* 80082964  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 80082968  7E 73 02 14 */	add r19, r19, r0
/* 8008296C  7C 13 E0 40 */	cmplw r19, r28
/* 80082970  40 81 FD 48 */	ble lbl_800826B8
/* 80082974  7D D7 73 78 */	mr r23, r14
/* 80082978  7E 94 CA 14 */	add r20, r20, r25
/* 8008297C  7C 14 D8 40 */	cmplw r20, r27
/* 80082980  40 81 FD 24 */	ble lbl_800826A4
/* 80082984  7E B5 C2 14 */	add r21, r21, r24
/* 80082988  7C 15 D0 40 */	cmplw r21, r26
/* 8008298C  40 81 FD 0C */	ble lbl_80082698
/* 80082990  7E C3 B3 78 */	mr r3, r22
lbl_80082994:
/* 80082994  39 61 01 20 */	addi r11, r1, 0x120
/* 80082998  48 2D F8 55 */	bl _restgpr_14
/* 8008299C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 800829A0  7C 08 03 A6 */	mtlr r0
/* 800829A4  38 21 01 20 */	addi r1, r1, 0x120
/* 800829A8  4E 80 00 20 */	blr 
