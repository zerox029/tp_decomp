lbl_80986448:
/* 80986448  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8098644C  7C 08 02 A6 */	mflr r0
/* 80986450  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80986454  39 61 00 E0 */	addi r11, r1, 0xe0
/* 80986458  4B 9D BD 49 */	bl _savegpr_14
/* 8098645C  3C 60 80 98 */	lis r3, cNullVec__6Z2Calc@ha /* 0x8098795C@ha */
/* 80986460  3B E3 79 5C */	addi r31, r3, cNullVec__6Z2Calc@l /* 0x8098795C@l */
/* 80986464  3C 60 80 98 */	lis r3, l_resMANa@ha /* 0x8098699C@ha */
/* 80986468  38 A3 69 9C */	addi r5, r3, l_resMANa@l /* 0x8098699C@l */
/* 8098646C  80 05 00 00 */	lwz r0, 0(r5)
/* 80986470  90 1F 00 98 */	stw r0, 0x98(r31)
/* 80986474  80 65 00 18 */	lwz r3, 0x18(r5)
/* 80986478  90 61 00 88 */	stw r3, 0x88(r1)
/* 8098647C  38 7F 00 98 */	addi r3, r31, 0x98
/* 80986480  80 81 00 88 */	lwz r4, 0x88(r1)
/* 80986484  90 83 00 08 */	stw r4, 8(r3)
/* 80986488  80 85 00 30 */	lwz r4, 0x30(r5)
/* 8098648C  90 81 00 84 */	stw r4, 0x84(r1)
/* 80986490  90 83 00 10 */	stw r4, 0x10(r3)
/* 80986494  80 85 00 48 */	lwz r4, 0x48(r5)
/* 80986498  90 81 00 80 */	stw r4, 0x80(r1)
/* 8098649C  90 83 00 18 */	stw r4, 0x18(r3)
/* 809864A0  80 85 00 60 */	lwz r4, 0x60(r5)
/* 809864A4  90 81 00 7C */	stw r4, 0x7c(r1)
/* 809864A8  90 83 00 20 */	stw r4, 0x20(r3)
/* 809864AC  80 85 00 78 */	lwz r4, 0x78(r5)
/* 809864B0  90 81 00 78 */	stw r4, 0x78(r1)
/* 809864B4  90 83 00 28 */	stw r4, 0x28(r3)
/* 809864B8  80 85 00 90 */	lwz r4, 0x90(r5)
/* 809864BC  90 81 00 74 */	stw r4, 0x74(r1)
/* 809864C0  90 83 00 30 */	stw r4, 0x30(r3)
/* 809864C4  80 85 00 A8 */	lwz r4, 0xa8(r5)
/* 809864C8  90 81 00 70 */	stw r4, 0x70(r1)
/* 809864CC  90 83 00 38 */	stw r4, 0x38(r3)
/* 809864D0  80 85 00 C0 */	lwz r4, 0xc0(r5)
/* 809864D4  90 81 00 6C */	stw r4, 0x6c(r1)
/* 809864D8  90 83 00 40 */	stw r4, 0x40(r3)
/* 809864DC  80 85 00 D8 */	lwz r4, 0xd8(r5)
/* 809864E0  90 81 00 68 */	stw r4, 0x68(r1)
/* 809864E4  90 83 00 48 */	stw r4, 0x48(r3)
/* 809864E8  80 85 00 F0 */	lwz r4, 0xf0(r5)
/* 809864EC  90 81 00 64 */	stw r4, 0x64(r1)
/* 809864F0  90 83 00 50 */	stw r4, 0x50(r3)
/* 809864F4  80 85 01 08 */	lwz r4, 0x108(r5)
/* 809864F8  90 81 00 60 */	stw r4, 0x60(r1)
/* 809864FC  90 83 00 58 */	stw r4, 0x58(r3)
/* 80986500  80 85 01 20 */	lwz r4, 0x120(r5)
/* 80986504  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80986508  90 83 00 60 */	stw r4, 0x60(r3)
/* 8098650C  80 85 01 38 */	lwz r4, 0x138(r5)
/* 80986510  90 81 00 58 */	stw r4, 0x58(r1)
/* 80986514  90 83 00 68 */	stw r4, 0x68(r3)
/* 80986518  80 85 01 50 */	lwz r4, 0x150(r5)
/* 8098651C  90 81 00 54 */	stw r4, 0x54(r1)
/* 80986520  90 83 00 70 */	stw r4, 0x70(r3)
/* 80986524  80 85 01 68 */	lwz r4, 0x168(r5)
/* 80986528  90 81 00 50 */	stw r4, 0x50(r1)
/* 8098652C  90 83 00 78 */	stw r4, 0x78(r3)
/* 80986530  80 85 01 80 */	lwz r4, 0x180(r5)
/* 80986534  90 81 00 4C */	stw r4, 0x4c(r1)
/* 80986538  90 83 00 80 */	stw r4, 0x80(r3)
/* 8098653C  80 85 01 98 */	lwz r4, 0x198(r5)
/* 80986540  90 81 00 48 */	stw r4, 0x48(r1)
/* 80986544  90 83 00 88 */	stw r4, 0x88(r3)
/* 80986548  80 85 01 B0 */	lwz r4, 0x1b0(r5)
/* 8098654C  90 81 00 44 */	stw r4, 0x44(r1)
/* 80986550  90 83 00 90 */	stw r4, 0x90(r3)
/* 80986554  80 85 01 C8 */	lwz r4, 0x1c8(r5)
/* 80986558  90 81 00 40 */	stw r4, 0x40(r1)
/* 8098655C  90 83 00 98 */	stw r4, 0x98(r3)
/* 80986560  80 85 01 E0 */	lwz r4, 0x1e0(r5)
/* 80986564  90 81 00 3C */	stw r4, 0x3c(r1)
/* 80986568  90 83 00 A0 */	stw r4, 0xa0(r3)
/* 8098656C  80 85 01 F8 */	lwz r4, 0x1f8(r5)
/* 80986570  90 81 00 38 */	stw r4, 0x38(r1)
/* 80986574  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 80986578  80 85 02 10 */	lwz r4, 0x210(r5)
/* 8098657C  90 81 00 34 */	stw r4, 0x34(r1)
/* 80986580  90 83 00 B0 */	stw r4, 0xb0(r3)
/* 80986584  80 85 02 28 */	lwz r4, 0x228(r5)
/* 80986588  90 81 00 30 */	stw r4, 0x30(r1)
/* 8098658C  90 83 00 B8 */	stw r4, 0xb8(r3)
/* 80986590  80 85 02 40 */	lwz r4, 0x240(r5)
/* 80986594  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80986598  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 8098659C  80 85 02 58 */	lwz r4, 0x258(r5)
/* 809865A0  90 81 00 28 */	stw r4, 0x28(r1)
/* 809865A4  90 83 00 C8 */	stw r4, 0xc8(r3)
/* 809865A8  80 85 02 70 */	lwz r4, 0x270(r5)
/* 809865AC  90 81 00 24 */	stw r4, 0x24(r1)
/* 809865B0  90 83 00 D0 */	stw r4, 0xd0(r3)
/* 809865B4  80 85 02 88 */	lwz r4, 0x288(r5)
/* 809865B8  90 81 00 20 */	stw r4, 0x20(r1)
/* 809865BC  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 809865C0  80 85 02 A0 */	lwz r4, 0x2a0(r5)
/* 809865C4  90 81 00 1C */	stw r4, 0x1c(r1)
/* 809865C8  90 83 00 E0 */	stw r4, 0xe0(r3)
/* 809865CC  80 85 02 B8 */	lwz r4, 0x2b8(r5)
/* 809865D0  90 81 00 18 */	stw r4, 0x18(r1)
/* 809865D4  90 83 00 E8 */	stw r4, 0xe8(r3)
/* 809865D8  38 65 00 00 */	addi r3, r5, 0
/* 809865DC  80 63 00 04 */	lwz r3, 4(r3)
/* 809865E0  90 61 00 14 */	stw r3, 0x14(r1)
/* 809865E4  90 7F 01 88 */	stw r3, 0x188(r31)
/* 809865E8  38 65 00 18 */	addi r3, r5, 0x18
/* 809865EC  80 63 00 04 */	lwz r3, 4(r3)
/* 809865F0  90 61 00 10 */	stw r3, 0x10(r1)
/* 809865F4  38 9F 01 88 */	addi r4, r31, 0x188
/* 809865F8  90 64 00 08 */	stw r3, 8(r4)
/* 809865FC  38 65 00 30 */	addi r3, r5, 0x30
/* 80986600  80 63 00 04 */	lwz r3, 4(r3)
/* 80986604  90 61 00 0C */	stw r3, 0xc(r1)
/* 80986608  90 64 00 10 */	stw r3, 0x10(r4)
/* 8098660C  38 65 00 48 */	addi r3, r5, 0x48
/* 80986610  80 63 00 04 */	lwz r3, 4(r3)
/* 80986614  90 61 00 08 */	stw r3, 8(r1)
/* 80986618  90 64 00 18 */	stw r3, 0x18(r4)
/* 8098661C  38 65 00 60 */	addi r3, r5, 0x60
/* 80986620  81 C3 00 04 */	lwz r14, 4(r3)
/* 80986624  91 C4 00 20 */	stw r14, 0x20(r4)
/* 80986628  38 65 00 78 */	addi r3, r5, 0x78
/* 8098662C  80 C3 00 04 */	lwz r6, 4(r3)
/* 80986630  90 C4 00 28 */	stw r6, 0x28(r4)
/* 80986634  38 65 00 90 */	addi r3, r5, 0x90
/* 80986638  80 E3 00 04 */	lwz r7, 4(r3)
/* 8098663C  90 E4 00 30 */	stw r7, 0x30(r4)
/* 80986640  38 65 00 A8 */	addi r3, r5, 0xa8
/* 80986644  81 03 00 04 */	lwz r8, 4(r3)
/* 80986648  91 04 00 38 */	stw r8, 0x38(r4)
/* 8098664C  38 65 00 C0 */	addi r3, r5, 0xc0
/* 80986650  81 23 00 04 */	lwz r9, 4(r3)
/* 80986654  91 24 00 40 */	stw r9, 0x40(r4)
/* 80986658  38 65 00 D8 */	addi r3, r5, 0xd8
/* 8098665C  81 43 00 04 */	lwz r10, 4(r3)
/* 80986660  91 44 00 48 */	stw r10, 0x48(r4)
/* 80986664  38 65 00 F0 */	addi r3, r5, 0xf0
/* 80986668  81 63 00 04 */	lwz r11, 4(r3)
/* 8098666C  91 64 00 50 */	stw r11, 0x50(r4)
/* 80986670  38 65 01 08 */	addi r3, r5, 0x108
/* 80986674  81 83 00 04 */	lwz r12, 4(r3)
/* 80986678  91 84 00 58 */	stw r12, 0x58(r4)
/* 8098667C  38 65 01 20 */	addi r3, r5, 0x120
/* 80986680  83 C3 00 04 */	lwz r30, 4(r3)
/* 80986684  93 C4 00 60 */	stw r30, 0x60(r4)
/* 80986688  38 65 01 38 */	addi r3, r5, 0x138
/* 8098668C  83 A3 00 04 */	lwz r29, 4(r3)
/* 80986690  93 A4 00 68 */	stw r29, 0x68(r4)
/* 80986694  38 65 01 50 */	addi r3, r5, 0x150
/* 80986698  83 83 00 04 */	lwz r28, 4(r3)
/* 8098669C  93 84 00 70 */	stw r28, 0x70(r4)
/* 809866A0  38 65 01 68 */	addi r3, r5, 0x168
/* 809866A4  83 63 00 04 */	lwz r27, 4(r3)
/* 809866A8  93 64 00 78 */	stw r27, 0x78(r4)
/* 809866AC  38 65 01 80 */	addi r3, r5, 0x180
/* 809866B0  83 43 00 04 */	lwz r26, 4(r3)
/* 809866B4  93 44 00 80 */	stw r26, 0x80(r4)
/* 809866B8  38 65 01 98 */	addi r3, r5, 0x198
/* 809866BC  83 23 00 04 */	lwz r25, 4(r3)
/* 809866C0  93 24 00 88 */	stw r25, 0x88(r4)
/* 809866C4  38 65 01 B0 */	addi r3, r5, 0x1b0
/* 809866C8  83 03 00 04 */	lwz r24, 4(r3)
/* 809866CC  93 04 00 90 */	stw r24, 0x90(r4)
/* 809866D0  38 65 01 C8 */	addi r3, r5, 0x1c8
/* 809866D4  82 E3 00 04 */	lwz r23, 4(r3)
/* 809866D8  92 E4 00 98 */	stw r23, 0x98(r4)
/* 809866DC  38 65 01 E0 */	addi r3, r5, 0x1e0
/* 809866E0  82 C3 00 04 */	lwz r22, 4(r3)
/* 809866E4  92 C4 00 A0 */	stw r22, 0xa0(r4)
/* 809866E8  38 65 01 F8 */	addi r3, r5, 0x1f8
/* 809866EC  82 A3 00 04 */	lwz r21, 4(r3)
/* 809866F0  92 A4 00 A8 */	stw r21, 0xa8(r4)
/* 809866F4  38 65 02 10 */	addi r3, r5, 0x210
/* 809866F8  82 83 00 04 */	lwz r20, 4(r3)
/* 809866FC  92 84 00 B0 */	stw r20, 0xb0(r4)
/* 80986700  38 65 02 28 */	addi r3, r5, 0x228
/* 80986704  82 63 00 04 */	lwz r19, 4(r3)
/* 80986708  92 64 00 B8 */	stw r19, 0xb8(r4)
/* 8098670C  38 65 02 40 */	addi r3, r5, 0x240
/* 80986710  82 43 00 04 */	lwz r18, 4(r3)
/* 80986714  92 44 00 C0 */	stw r18, 0xc0(r4)
/* 80986718  38 65 02 58 */	addi r3, r5, 0x258
/* 8098671C  82 23 00 04 */	lwz r17, 4(r3)
/* 80986720  92 24 00 C8 */	stw r17, 0xc8(r4)
/* 80986724  38 65 02 70 */	addi r3, r5, 0x270
/* 80986728  82 03 00 04 */	lwz r16, 4(r3)
/* 8098672C  92 04 00 D0 */	stw r16, 0xd0(r4)
/* 80986730  38 65 02 88 */	addi r3, r5, 0x288
/* 80986734  81 E3 00 04 */	lwz r15, 4(r3)
/* 80986738  91 E4 00 D8 */	stw r15, 0xd8(r4)
/* 8098673C  38 65 02 A0 */	addi r3, r5, 0x2a0
/* 80986740  80 63 00 04 */	lwz r3, 4(r3)
/* 80986744  90 64 00 E0 */	stw r3, 0xe0(r4)
/* 80986748  38 A5 02 B8 */	addi r5, r5, 0x2b8
/* 8098674C  80 A5 00 04 */	lwz r5, 4(r5)
/* 80986750  90 A4 00 E8 */	stw r5, 0xe8(r4)
/* 80986754  90 1F 02 78 */	stw r0, 0x278(r31)
/* 80986758  38 9F 02 78 */	addi r4, r31, 0x278
/* 8098675C  80 01 00 88 */	lwz r0, 0x88(r1)
/* 80986760  90 04 00 08 */	stw r0, 8(r4)
/* 80986764  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80986768  90 04 00 10 */	stw r0, 0x10(r4)
/* 8098676C  80 01 00 80 */	lwz r0, 0x80(r1)
/* 80986770  90 04 00 18 */	stw r0, 0x18(r4)
/* 80986774  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80986778  90 04 00 20 */	stw r0, 0x20(r4)
/* 8098677C  80 01 00 78 */	lwz r0, 0x78(r1)
/* 80986780  90 04 00 28 */	stw r0, 0x28(r4)
/* 80986784  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80986788  90 04 00 30 */	stw r0, 0x30(r4)
/* 8098678C  80 01 00 70 */	lwz r0, 0x70(r1)
/* 80986790  90 04 00 38 */	stw r0, 0x38(r4)
/* 80986794  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80986798  90 04 00 40 */	stw r0, 0x40(r4)
/* 8098679C  80 01 00 68 */	lwz r0, 0x68(r1)
/* 809867A0  90 04 00 48 */	stw r0, 0x48(r4)
/* 809867A4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 809867A8  90 04 00 50 */	stw r0, 0x50(r4)
/* 809867AC  80 01 00 60 */	lwz r0, 0x60(r1)
/* 809867B0  90 04 00 58 */	stw r0, 0x58(r4)
/* 809867B4  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 809867B8  90 04 00 60 */	stw r0, 0x60(r4)
/* 809867BC  80 01 00 58 */	lwz r0, 0x58(r1)
/* 809867C0  90 04 00 68 */	stw r0, 0x68(r4)
/* 809867C4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 809867C8  90 04 00 70 */	stw r0, 0x70(r4)
/* 809867CC  80 01 00 50 */	lwz r0, 0x50(r1)
/* 809867D0  90 04 00 78 */	stw r0, 0x78(r4)
/* 809867D4  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 809867D8  90 04 00 80 */	stw r0, 0x80(r4)
/* 809867DC  80 01 00 48 */	lwz r0, 0x48(r1)
/* 809867E0  90 04 00 88 */	stw r0, 0x88(r4)
/* 809867E4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 809867E8  90 04 00 90 */	stw r0, 0x90(r4)
/* 809867EC  80 01 00 40 */	lwz r0, 0x40(r1)
/* 809867F0  90 04 00 98 */	stw r0, 0x98(r4)
/* 809867F4  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 809867F8  90 04 00 A0 */	stw r0, 0xa0(r4)
/* 809867FC  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80986800  90 04 00 A8 */	stw r0, 0xa8(r4)
/* 80986804  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80986808  90 04 00 B0 */	stw r0, 0xb0(r4)
/* 8098680C  80 01 00 30 */	lwz r0, 0x30(r1)
/* 80986810  90 04 00 B8 */	stw r0, 0xb8(r4)
/* 80986814  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80986818  90 04 00 C0 */	stw r0, 0xc0(r4)
/* 8098681C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80986820  90 04 00 C8 */	stw r0, 0xc8(r4)
/* 80986824  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80986828  90 04 00 D0 */	stw r0, 0xd0(r4)
/* 8098682C  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80986830  90 04 00 D8 */	stw r0, 0xd8(r4)
/* 80986834  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80986838  90 04 00 E0 */	stw r0, 0xe0(r4)
/* 8098683C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80986840  90 04 00 E8 */	stw r0, 0xe8(r4)
/* 80986844  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80986848  90 1F 03 68 */	stw r0, 0x368(r31)
/* 8098684C  38 9F 03 68 */	addi r4, r31, 0x368
/* 80986850  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80986854  90 04 00 08 */	stw r0, 8(r4)
/* 80986858  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8098685C  90 04 00 10 */	stw r0, 0x10(r4)
/* 80986860  80 01 00 08 */	lwz r0, 8(r1)
/* 80986864  90 04 00 18 */	stw r0, 0x18(r4)
/* 80986868  91 C4 00 20 */	stw r14, 0x20(r4)
/* 8098686C  90 C4 00 28 */	stw r6, 0x28(r4)
/* 80986870  90 E4 00 30 */	stw r7, 0x30(r4)
/* 80986874  91 04 00 38 */	stw r8, 0x38(r4)
/* 80986878  91 24 00 40 */	stw r9, 0x40(r4)
/* 8098687C  91 44 00 48 */	stw r10, 0x48(r4)
/* 80986880  91 64 00 50 */	stw r11, 0x50(r4)
/* 80986884  91 84 00 58 */	stw r12, 0x58(r4)
/* 80986888  93 C4 00 60 */	stw r30, 0x60(r4)
/* 8098688C  93 A4 00 68 */	stw r29, 0x68(r4)
/* 80986890  93 84 00 70 */	stw r28, 0x70(r4)
/* 80986894  93 64 00 78 */	stw r27, 0x78(r4)
/* 80986898  93 44 00 80 */	stw r26, 0x80(r4)
/* 8098689C  93 24 00 88 */	stw r25, 0x88(r4)
/* 809868A0  93 04 00 90 */	stw r24, 0x90(r4)
/* 809868A4  92 E4 00 98 */	stw r23, 0x98(r4)
/* 809868A8  92 C4 00 A0 */	stw r22, 0xa0(r4)
/* 809868AC  92 A4 00 A8 */	stw r21, 0xa8(r4)
/* 809868B0  92 84 00 B0 */	stw r20, 0xb0(r4)
/* 809868B4  92 64 00 B8 */	stw r19, 0xb8(r4)
/* 809868B8  92 44 00 C0 */	stw r18, 0xc0(r4)
/* 809868BC  92 24 00 C8 */	stw r17, 0xc8(r4)
/* 809868C0  92 04 00 D0 */	stw r16, 0xd0(r4)
/* 809868C4  91 E4 00 D8 */	stw r15, 0xd8(r4)
/* 809868C8  90 64 00 E0 */	stw r3, 0xe0(r4)
/* 809868CC  90 A4 00 E8 */	stw r5, 0xe8(r4)
/* 809868D0  3C 60 80 99 */	lis r3, __vt__17daNpcChat_Param_c@ha /* 0x8098BA68@ha */
/* 809868D4  38 03 BA 68 */	addi r0, r3, __vt__17daNpcChat_Param_c@l /* 0x8098BA68@l */
/* 809868D8  3C 60 80 99 */	lis r3, l_HIO@ha /* 0x8098BACC@ha */
/* 809868DC  94 03 BA CC */	stwu r0, l_HIO@l(r3)  /* 0x8098BACC@l */
/* 809868E0  3C 80 80 98 */	lis r4, __dt__17daNpcChat_Param_cFv@ha /* 0x80986930@ha */
/* 809868E4  38 84 69 30 */	addi r4, r4, __dt__17daNpcChat_Param_cFv@l /* 0x80986930@l */
/* 809868E8  3C A0 80 99 */	lis r5, lit_3881@ha /* 0x8098BAC0@ha */
/* 809868EC  38 A5 BA C0 */	addi r5, r5, lit_3881@l /* 0x8098BAC0@l */
/* 809868F0  4B FF 9E E9 */	bl __register_global_object
/* 809868F4  3C 60 80 3A */	lis r3, __ptmf_null@ha /* 0x803A2180@ha */
/* 809868F8  38 83 21 80 */	addi r4, r3, __ptmf_null@l /* 0x803A2180@l */
/* 809868FC  80 64 00 00 */	lwz r3, 0(r4)
/* 80986900  80 04 00 04 */	lwz r0, 4(r4)
/* 80986904  90 7F 3D F8 */	stw r3, 0x3df8(r31)
/* 80986908  90 1F 3D FC */	stw r0, 0x3dfc(r31)
/* 8098690C  80 04 00 08 */	lwz r0, 8(r4)
/* 80986910  90 1F 3E 00 */	stw r0, 0x3e00(r31)
/* 80986914  39 61 00 E0 */	addi r11, r1, 0xe0
/* 80986918  4B 9D B8 D5 */	bl _restgpr_14
/* 8098691C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80986920  7C 08 03 A6 */	mtlr r0
/* 80986924  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80986928  4E 80 00 20 */	blr 
