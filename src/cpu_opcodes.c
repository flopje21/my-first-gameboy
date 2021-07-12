#include "cpu_opcodes.h"
#include "register.h"

void load_cpu_opcodes(cpu_t *cpu, opfunc_t *arr)
{
    arr[0x00] = (opfunc_t){&opfunc_00, 1, 4, 1};
    arr[0x01] = (opfunc_t){&opfunc_01, 3, 12, 3};
    arr[0x02] = (opfunc_t){&opfunc_02, 1, 8, 1};
    arr[0x03] = (opfunc_t){&opfunc_03, 1, 8, 1};
    arr[0x04] = (opfunc_t){&opfunc_04, 1, 4, 1};
    arr[0x05] = (opfunc_t){&opfunc_05, 1, 4, 1};
    arr[0x06] = (opfunc_t){&opfunc_06, 2, 8, 2};
    arr[0x07] = (opfunc_t){&opfunc_07, 1, 4, 1};
    arr[0x08] = (opfunc_t){&opfunc_08, 3, 20, 3};
    arr[0x09] = (opfunc_t){&opfunc_09, 1, 8, 1};
    arr[0x0A] = (opfunc_t){&opfunc_0A, 1, 8, 1};
    arr[0x0B] = (opfunc_t){&opfunc_0B, 1, 8, 1};
    arr[0x0C] = (opfunc_t){&opfunc_0C, 1, 4, 1};
    arr[0x0D] = (opfunc_t){&opfunc_0D, 1, 4, 1};
    arr[0x0E] = (opfunc_t){&opfunc_0E, 2, 8, 2};
    arr[0x0F] = (opfunc_t){&opfunc_0F, 1, 4, 1};
    arr[0x10] = (opfunc_t){&opfunc_10, 2, 4, 2};
    arr[0x11] = (opfunc_t){&opfunc_11, 3, 12, 3};
    arr[0x12] = (opfunc_t){&opfunc_12, 1, 8, 1};
    arr[0x13] = (opfunc_t){&opfunc_13, 1, 8, 1};
    arr[0x14] = (opfunc_t){&opfunc_14, 1, 4, 1};
    arr[0x15] = (opfunc_t){&opfunc_15, 1, 4, 1};
    arr[0x16] = (opfunc_t){&opfunc_16, 2, 8, 2};
    arr[0x17] = (opfunc_t){&opfunc_17, 1, 4, 1};
    arr[0x18] = (opfunc_t){&opfunc_18, 2, 12, 0};
    arr[0x19] = (opfunc_t){&opfunc_19, 1, 8, 1};
    arr[0x1A] = (opfunc_t){&opfunc_1A, 1, 8, 1};
    arr[0x1B] = (opfunc_t){&opfunc_1B, 1, 8, 1};
    arr[0x1C] = (opfunc_t){&opfunc_1C, 1, 4, 1};
    arr[0x1D] = (opfunc_t){&opfunc_1D, 1, 4, 1};
    arr[0x1E] = (opfunc_t){&opfunc_1E, 2, 8, 2};
    arr[0x1F] = (opfunc_t){&opfunc_1F, 1, 4, 1};
    arr[0x20] = (opfunc_t){&opfunc_20, 2, 12, 0};
    arr[0x21] = (opfunc_t){&opfunc_21, 3, 12, 3};
    arr[0x22] = (opfunc_t){&opfunc_22, 1, 8, 1};
    arr[0x23] = (opfunc_t){&opfunc_23, 1, 8, 1};
    arr[0x24] = (opfunc_t){&opfunc_24, 1, 4, 1};
    arr[0x25] = (opfunc_t){&opfunc_25, 1, 4, 1};
    arr[0x26] = (opfunc_t){&opfunc_26, 2, 8, 2};
    arr[0x27] = (opfunc_t){&opfunc_27, 1, 4, 1};
    arr[0x28] = (opfunc_t){&opfunc_28, 2, 12, 0};
    arr[0x29] = (opfunc_t){&opfunc_29, 1, 8, 1};
    arr[0x2A] = (opfunc_t){&opfunc_2A, 1, 8, 1};
    arr[0x2B] = (opfunc_t){&opfunc_2B, 1, 8, 1};
    arr[0x2C] = (opfunc_t){&opfunc_2C, 1, 4, 1};
    arr[0x2D] = (opfunc_t){&opfunc_2D, 1, 4, 1};
    arr[0x2E] = (opfunc_t){&opfunc_2E, 2, 8, 2};
    arr[0x2F] = (opfunc_t){&opfunc_2F, 1, 4, 1};
    arr[0x30] = (opfunc_t){&opfunc_30, 2, 12, 0};
    arr[0x31] = (opfunc_t){&opfunc_31, 3, 12, 3};
    arr[0x32] = (opfunc_t){&opfunc_32, 1, 8, 1};
    arr[0x33] = (opfunc_t){&opfunc_33, 1, 8, 1};
    arr[0x34] = (opfunc_t){&opfunc_34, 1, 12, 1};
    arr[0x35] = (opfunc_t){&opfunc_35, 1, 12, 1};
    arr[0x36] = (opfunc_t){&opfunc_36, 1, 12, 1};
    arr[0x37] = (opfunc_t){&opfunc_37, 1, 4, 1};
    arr[0x38] = (opfunc_t){&opfunc_38, 2, 12, 0};
    arr[0x39] = (opfunc_t){&opfunc_39, 1, 8, 1};
    arr[0x3A] = (opfunc_t){&opfunc_3A, 1, 8, 1};
    arr[0x3B] = (opfunc_t){&opfunc_3B, 1, 8, 1};
    arr[0x3C] = (opfunc_t){&opfunc_3C, 1, 4, 1};
    arr[0x3D] = (opfunc_t){&opfunc_3D, 1, 4, 1};
    arr[0x3E] = (opfunc_t){&opfunc_3E, 2, 8, 2};
    arr[0x3F] = (opfunc_t){&opfunc_3F, 1, 4, 1};
    arr[0x40] = (opfunc_t){&opfunc_40, 1, 4, 1};
    arr[0x41] = (opfunc_t){&opfunc_41, 1, 4, 1};
    arr[0x42] = (opfunc_t){&opfunc_42, 1, 4, 1};
    arr[0x43] = (opfunc_t){&opfunc_43, 1, 4, 1};
    arr[0x44] = (opfunc_t){&opfunc_44, 1, 4, 1};
    arr[0x45] = (opfunc_t){&opfunc_45, 1, 4, 1};
    arr[0x46] = (opfunc_t){&opfunc_46, 1, 8, 1};
    arr[0x47] = (opfunc_t){&opfunc_47, 1, 4, 1};
    arr[0x48] = (opfunc_t){&opfunc_48, 1, 4, 1};
    arr[0x49] = (opfunc_t){&opfunc_49, 1, 4, 1};
    arr[0x4A] = (opfunc_t){&opfunc_4A, 1, 4, 1};
    arr[0x4B] = (opfunc_t){&opfunc_4B, 1, 4, 1};
    arr[0x4C] = (opfunc_t){&opfunc_4C, 1, 4, 1};
    arr[0x4D] = (opfunc_t){&opfunc_4D, 1, 4, 1};
    arr[0x4E] = (opfunc_t){&opfunc_4E, 1, 8, 1};
    arr[0x4F] = (opfunc_t){&opfunc_4F, 1, 4, 1};
    arr[0x50] = (opfunc_t){&opfunc_50, 1, 4, 1};
    arr[0x51] = (opfunc_t){&opfunc_51, 1, 4, 1};
    arr[0x52] = (opfunc_t){&opfunc_52, 1, 4, 1};
    arr[0x53] = (opfunc_t){&opfunc_53, 1, 4, 1};
    arr[0x54] = (opfunc_t){&opfunc_54, 1, 4, 1};
    arr[0x55] = (opfunc_t){&opfunc_55, 1, 4, 1};
    arr[0x56] = (opfunc_t){&opfunc_56, 1, 8, 1};
    arr[0x57] = (opfunc_t){&opfunc_57, 1, 4, 1};
    arr[0x58] = (opfunc_t){&opfunc_58, 1, 4, 1};
    arr[0x59] = (opfunc_t){&opfunc_59, 1, 4, 1};
    arr[0x5A] = (opfunc_t){&opfunc_5A, 1, 4, 1};
    arr[0x5B] = (opfunc_t){&opfunc_5B, 1, 4, 1};
    arr[0x5C] = (opfunc_t){&opfunc_5C, 1, 4, 1};
    arr[0x5D] = (opfunc_t){&opfunc_5D, 1, 4, 1};
    arr[0x5E] = (opfunc_t){&opfunc_5E, 1, 8, 1};
    arr[0x5F] = (opfunc_t){&opfunc_5F, 1, 4, 1};
    arr[0x60] = (opfunc_t){&opfunc_60, 1, 4, 1};
    arr[0x61] = (opfunc_t){&opfunc_61, 1, 4, 1};
    arr[0x62] = (opfunc_t){&opfunc_62, 1, 4, 1};
    arr[0x63] = (opfunc_t){&opfunc_63, 1, 4, 1};
    arr[0x64] = (opfunc_t){&opfunc_64, 1, 4, 1};
    arr[0x65] = (opfunc_t){&opfunc_65, 1, 4, 1};
    arr[0x66] = (opfunc_t){&opfunc_66, 1, 8, 1};
    arr[0x67] = (opfunc_t){&opfunc_67, 1, 4, 1};
    arr[0x68] = (opfunc_t){&opfunc_68, 1, 4, 1};
    arr[0x69] = (opfunc_t){&opfunc_69, 1, 4, 1};
    arr[0x6A] = (opfunc_t){&opfunc_6A, 1, 4, 1};
    arr[0x6B] = (opfunc_t){&opfunc_6B, 1, 4, 1};
    arr[0x6C] = (opfunc_t){&opfunc_6C, 1, 4, 1};
    arr[0x6D] = (opfunc_t){&opfunc_6D, 1, 4, 1};
    arr[0x6E] = (opfunc_t){&opfunc_6E, 1, 8, 1};
    arr[0x6F] = (opfunc_t){&opfunc_6F, 1, 4, 1};
    arr[0x70] = (opfunc_t){&opfunc_70, 1, 8, 1};
    arr[0x71] = (opfunc_t){&opfunc_71, 1, 8, 1};
    arr[0x72] = (opfunc_t){&opfunc_72, 1, 8, 1};
    arr[0x73] = (opfunc_t){&opfunc_73, 1, 8, 1};
    arr[0x74] = (opfunc_t){&opfunc_74, 1, 8, 1};
    arr[0x75] = (opfunc_t){&opfunc_75, 1, 8, 1};
    arr[0x76] = (opfunc_t){&opfunc_halt, 1, 4, 1};
    arr[0x77] = (opfunc_t){&opfunc_77, 1, 8, 1};
    arr[0x78] = (opfunc_t){&opfunc_78, 1, 4, 1};
    arr[0x79] = (opfunc_t){&opfunc_79, 1, 4, 1};
    arr[0x7A] = (opfunc_t){&opfunc_7A, 1, 4, 1};
    arr[0x7B] = (opfunc_t){&opfunc_7B, 1, 4, 1};
    arr[0x7C] = (opfunc_t){&opfunc_7C, 1, 4, 1};
    arr[0x7D] = (opfunc_t){&opfunc_7D, 1, 4, 1};
    arr[0x7E] = (opfunc_t){&opfunc_7E, 1, 8, 1};
    arr[0x7F] = (opfunc_t){&opfunc_7F, 1, 4, 1};
    arr[0x80] = (opfunc_t){&opfunc_80, 1, 4, 1};
    arr[0x81] = (opfunc_t){&opfunc_81, 1, 4, 1};
    arr[0x82] = (opfunc_t){&opfunc_82, 1, 4, 1};
    arr[0x83] = (opfunc_t){&opfunc_83, 1, 4, 1};
    arr[0x84] = (opfunc_t){&opfunc_84, 1, 4, 1};
    arr[0x85] = (opfunc_t){&opfunc_85, 1, 4, 1};
    arr[0x86] = (opfunc_t){&opfunc_86, 1, 8, 1};
    arr[0x87] = (opfunc_t){&opfunc_87, 1, 4, 1};
    arr[0x88] = (opfunc_t){&opfunc_88, 1, 4, 1};
    arr[0x89] = (opfunc_t){&opfunc_89, 1, 4, 1};
    arr[0x8A] = (opfunc_t){&opfunc_8A, 1, 4, 1};
    arr[0x8B] = (opfunc_t){&opfunc_8B, 1, 4, 1};
    arr[0x8C] = (opfunc_t){&opfunc_8C, 1, 4, 1};
    arr[0x8D] = (opfunc_t){&opfunc_8D, 1, 4, 1};
    arr[0x8E] = (opfunc_t){&opfunc_8E, 1, 8, 1};
    arr[0x8F] = (opfunc_t){&opfunc_8F, 1, 4, 1};
    arr[0x90] = (opfunc_t){&opfunc_90, 1, 4, 1};
    arr[0x91] = (opfunc_t){&opfunc_91, 1, 4, 1};
    arr[0x92] = (opfunc_t){&opfunc_92, 1, 4, 1};
    arr[0x93] = (opfunc_t){&opfunc_93, 1, 4, 1};
    arr[0x94] = (opfunc_t){&opfunc_94, 1, 4, 1};
    arr[0x95] = (opfunc_t){&opfunc_95, 1, 4, 1};
    arr[0x96] = (opfunc_t){&opfunc_96, 1, 8, 1};
    arr[0x97] = (opfunc_t){&opfunc_97, 1, 4, 1};
    arr[0x98] = (opfunc_t){&opfunc_98, 1, 4, 1};
    arr[0x99] = (opfunc_t){&opfunc_99, 1, 4, 1};
    arr[0x9A] = (opfunc_t){&opfunc_9A, 1, 4, 1};
    arr[0x9B] = (opfunc_t){&opfunc_9B, 1, 4, 1};
    arr[0x9C] = (opfunc_t){&opfunc_9C, 1, 4, 1};
    arr[0x9D] = (opfunc_t){&opfunc_9D, 1, 4, 1};
    arr[0x9E] = (opfunc_t){&opfunc_9E, 1, 8, 1};
    arr[0x9F] = (opfunc_t){&opfunc_9F, 1, 4, 1};
    arr[0xA0] = (opfunc_t){&opfunc_A0, 1, 4, 1};
    arr[0xA1] = (opfunc_t){&opfunc_A1, 1, 4, 1};
    arr[0xA2] = (opfunc_t){&opfunc_A2, 1, 4, 1};
    arr[0xA3] = (opfunc_t){&opfunc_A3, 1, 4, 1};
    arr[0xA4] = (opfunc_t){&opfunc_A4, 1, 4, 1};
    arr[0xA5] = (opfunc_t){&opfunc_A5, 1, 4, 1};
    arr[0xA6] = (opfunc_t){&opfunc_A6, 1, 8, 1};
    arr[0xA7] = (opfunc_t){&opfunc_A7, 1, 4, 1};
    arr[0xA8] = (opfunc_t){&opfunc_A8, 1, 4, 1};
    arr[0xA9] = (opfunc_t){&opfunc_A9, 1, 4, 1};
    arr[0xAA] = (opfunc_t){&opfunc_AA, 1, 4, 1};
    arr[0xAB] = (opfunc_t){&opfunc_AB, 1, 4, 1};
    arr[0xAC] = (opfunc_t){&opfunc_AC, 1, 4, 1};
    arr[0xAD] = (opfunc_t){&opfunc_AD, 1, 4, 1};
    arr[0xAE] = (opfunc_t){&opfunc_AE, 1, 8, 1};
    arr[0xAF] = (opfunc_t){&opfunc_AF, 1, 4, 1};
    arr[0xB0] = (opfunc_t){&opfunc_B0, 1, 4, 1};
    arr[0xB1] = (opfunc_t){&opfunc_B1, 1, 4, 1};
    arr[0xB2] = (opfunc_t){&opfunc_B2, 1, 4, 1};
    arr[0xB3] = (opfunc_t){&opfunc_B3, 1, 4, 1};
    arr[0xB4] = (opfunc_t){&opfunc_B4, 1, 4, 1};
    arr[0xB5] = (opfunc_t){&opfunc_B5, 1, 4, 1};
    arr[0xB6] = (opfunc_t){&opfunc_B6, 1, 8, 1};
    arr[0xB7] = (opfunc_t){&opfunc_B7, 1, 4, 1};
    arr[0xB8] = (opfunc_t){&opfunc_B8, 1, 4, 1};
    arr[0xB9] = (opfunc_t){&opfunc_B9, 1, 4, 1};
    arr[0xBA] = (opfunc_t){&opfunc_BA, 1, 4, 1};
    arr[0xBB] = (opfunc_t){&opfunc_BB, 1, 4, 1};
    arr[0xBC] = (opfunc_t){&opfunc_BC, 1, 4, 1};
    arr[0xBD] = (opfunc_t){&opfunc_BD, 1, 4, 1};
    arr[0xBE] = (opfunc_t){&opfunc_BE, 1, 8, 1};
    arr[0xBF] = (opfunc_t){&opfunc_BF, 1, 4, 1};
    arr[0xC0] = (opfunc_t){&opfunc_C0, 1, 20, 0};
    arr[0xC1] = (opfunc_t){&opfunc_C1, 1, 12, 1};
    arr[0xC2] = (opfunc_t){&opfunc_C2, 3, 16, 0};
    arr[0xC3] = (opfunc_t){&opfunc_C3, 3, 16, 0};
    arr[0xC4] = (opfunc_t){&opfunc_C4, 3, 24, 0};
    arr[0xC5] = (opfunc_t){&opfunc_C5, 1, 16, 1};
    arr[0xC6] = (opfunc_t){&opfunc_C6, 2, 8, 2};
    arr[0xC8] = (opfunc_t){&opfunc_C8, 1, 20, 0};
    arr[0xC9] = (opfunc_t){&opfunc_C9, 1, 16, 0};
    arr[0xCA] = (opfunc_t){&opfunc_CA, 3, 16, 0};
    arr[0xCB] = (opfunc_t){NULL, 1, 4, 1}; // Initial CB opcode is 1 byte, takes 4 cycles
    arr[0xCC] = (opfunc_t){&opfunc_CC, 3, 24, 0};
    arr[0xCD] = (opfunc_t){&opfunc_CD, 3, 24, 0};
    arr[0xCE] = (opfunc_t){&opfunc_CE, 2, 8, 2};
    arr[0xD0] = (opfunc_t){&opfunc_D0, 1, 20, 0};
    arr[0xD1] = (opfunc_t){&opfunc_D1, 1, 12, 1};
    arr[0xD2] = (opfunc_t){&opfunc_D2, 3, 16, 0};
    arr[0xD3] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xD4] = (opfunc_t){&opfunc_D4, 3, 24, 0};
    arr[0xD5] = (opfunc_t){&opfunc_D5, 1, 16, 1};
    arr[0xD6] = (opfunc_t){&opfunc_D6, 2, 8, 2};
    arr[0xD8] = (opfunc_t){&opfunc_D8, 1, 20, 0};
    arr[0xD9] = (opfunc_t){&opfunc_D9, 1, 16, 1};
    arr[0xDA] = (opfunc_t){&opfunc_DA, 3, 16, 0};
    arr[0xDB] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xDC] = (opfunc_t){&opfunc_DC, 3, 24, 0};
    arr[0xDD] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xDE] = (opfunc_t){&opfunc_DE, 2, 8, 2};

    arr[0xE0] = (opfunc_t){&opfunc_E0, 2, 12, 2};
    arr[0xE1] = (opfunc_t){&opfunc_E1, 1, 12, 1};
    arr[0xE2] = (opfunc_t){&opfunc_E2, 1, 12, 1};
    arr[0xE3] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xE4] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xE5] = (opfunc_t){&opfunc_E5, 1, 16, 1};
    arr[0xE6] = (opfunc_t){&opfunc_E6, 2, 8, 2};
    arr[0xEA] = (opfunc_t){&opfunc_EA, 3, 12, 3};
    arr[0xEB] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xEC] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xED] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xEE] = (opfunc_t){&opfunc_EE, 2, 8, 2};
    
    arr[0xF0] = (opfunc_t){&opfunc_F0, 2, 8, 2};
    arr[0xF1] = (opfunc_t){&opfunc_F1, 1, 12, 1};
    arr[0xF2] = (opfunc_t){&opfunc_F2, 1, 8, 1};
    arr[0xF3] = (opfunc_t){&opfunc_F3, 1, 4, 1};
    arr[0xF4] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xF5] = (opfunc_t){&opfunc_F5, 1, 16, 1};
    arr[0xF6] = (opfunc_t){&opfunc_F6, 2, 8, 2};
    arr[0xFA] = (opfunc_t){&opfunc_FA, 3, 16, 3};
    arr[0xFB] = (opfunc_t){&opfunc_FA, 1, 4, 1};
    arr[0xFC] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xFD] = (opfunc_t){NULL, 0, 0, 0};
    arr[0xFE] = (opfunc_t){&opfunc_FE, 2, 8, 2};
    arr[0xFF] = (opfunc_t){&opfunc_FF, 1, 16, 0};
}

void register_increment(cpu_t *cpu, reg16_t *reg, bool hi)
{
    uint8_t old_value;
    if (hi)
    {
        old_value = reg_get_hi(reg);
        reg_set_hi(reg, increment(cpu, old_value, 1));
    }
    else
    {
        old_value = reg_get_lo(reg);
        reg_set_lo(reg, increment(cpu, old_value, 1));
    }
}

void register_decrement(cpu_t *cpu, reg16_t *reg, bool hi)
{
    uint8_t old_value;
    if (hi)
    {
        old_value = reg_get_hi(reg);
        reg_set_hi(reg, decrement(cpu, old_value, 1));
    }
    else
    {
        old_value = reg_get_lo(reg);
        reg_set_lo(reg, decrement(cpu, old_value, 1));
    }
}

/**
 * Increment current value with increment
 * Will only set half carry if applicable
 */
uint8_t increment(cpu_t *cpu, uint8_t current, uint8_t increment)
{
    uint8_t new_value = current + increment;

    // Clear flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);

    // Check for zero value
    if (new_value == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    // Check for half carry
    if (test_half_carry(current, 1))
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }

    return new_value;
}

/**
 * Decrement current value by provided decrement
 * Will only set half carry if applicable
 */
uint8_t decrement(cpu_t *cpu, uint8_t current, uint8_t decrement)
{
    uint8_t new_value = current - decrement;

    // Set substract flag
    cpu->flags |= (CPU_SUBSTRACT_FLAG_BIT);

    // Clear flags
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);

    // Check for zero value
    if (new_value == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    // Check for borrow, will set carry if borrow occured
    if (current & 0x0F == 0x10)
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }
}

/*
 * Add value a and b and return result.
 * will (re)set correct flags on provided cpu
 */ 
uint8_t add_8x8(cpu_t *cpu, uint8_t a, uint8_t b)
{
    uint8_t new_value = a + b;

    // Clear flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Check for zero value
    if (new_value == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    // Check for half carry
    if (test_half_carry(a, b))
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }

    if (test_8bit_carry(a, b))
    {
        cpu->flags |= CPU_CARRY_FLAG_BIT;
    }

    return new_value;
}

/**
 * Add with carry
 * Add b to a, and add value of carry flag to total
 */
uint8_t adc_8x8(cpu_t *cpu, uint8_t a, uint8_t b)
{
    uint8_t temp = b + (cpu->flags & CPU_CARRY_FLAG_BIT);
    return add_8x8(cpu, a, temp);
}

/**
 * Add 2 16 bit values
 * Zero flag is unaffected, subtract flag is reset
 * Half carry is tested on bit 11, carry on bit 15
 */
uint16_t add_16x16(cpu_t *cpu, uint16_t a, uint16_t b)
{
    uint16_t result = a + b;

    // Zero flag is unaffected, rest is cleared
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    if (((a & 0x800) + (b & 0x800)) & 0x1000 == 0x1000)
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }
    
    if (((a & 0xFFFF) + (b & 0xFFFF)) & 0x10000 == 0x10000)
    {
        cpu->flags |= CPU_CARRY_FLAG_BIT;
    }

    return result;
}

uint8_t sub_8x8(cpu_t *cpu, uint8_t a, uint8_t b) 
{
    uint8_t new_value = a - b;

    // Set substract flag
    cpu->flags |= CPU_SUBSTRACT_FLAG_BIT;
    
    // Clear flags
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Check for zero value
    if (new_value == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    // Check for half borrow, will set carry if borrow occured
    if (a & 0x0F == 0x10)
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }

    // Test for borrow
    if (a < b)
    {
        cpu->flags |= CPU_CARRY_FLAG_BIT;
    }

    return new_value;
}

uint8_t subc_8x8(cpu_t *cpu, uint8_t a, uint8_t b)
{
    uint8_t new = b - (cpu->flags & CPU_CARRY_FLAG_BIT);
    return sub_8x8(cpu, a, new);
}

bool test_half_carry(uint8_t current_value, uint8_t increment)
{
    return ((current_value & 0x0F) + (increment & 0x0F)) & 0x10 == 0x10;
}

bool test_8bit_carry(uint8_t current_value, uint8_t increment)
{
    return ((current_value & 0x00FF) + (increment & 0x00FF)) & 0x100 == 0x100;
}

/**
 * Rotate a left, and set carry flag to value of bit 7 of a 
 * before rotate happened
 */
uint8_t rot_lc(cpu_t *cpu, uint8_t a)
{
    // Reset Flags
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Rotate a left
    uint8_t high = a >> 7;
    a = a << 1;
    a |= high;

    // Set carry to value of high bit
    cpu->flags |= (high << 4);

    if (a == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    return a;
}

/**
 * Rotate a left, through the carry flag, eg:
 * The contents of a are shifted 1 left, and 
 * the contents of the carry flag are set in bit 0 of a
 */
uint8_t rot_l(cpu_t *cpu, uint8_t a)
{
    // Reset Flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Get value of carry for bit 0
    uint8_t carry = cpu->flags >> 4;
    uint8_t high = a >> 7;
    a = a << 1;
    a |= carry;

    // Set carry to value of high bit
    cpu->flags |= (high << 4);

    if (a == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    return a;
}

/**
 * Rotate a right, and set carry flag to value of bit 0 of a 
 * before rotate happened
 */
uint8_t rot_rc(cpu_t *cpu, uint8_t a)
{
    // Reset Flags
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    uint8_t high = a << 7;
    // Rotate a right
    a = a >> 1;
    a |= high;

    // Set carry to value of high bit
    cpu->flags |= (high >> 3);

    if (a == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }
    
    return a;
}

/**
 * Rotate a right, through the carry flag, eg:
 * The contents of a are shifted 1 right, and 
 * the contents of the carry flag are set in bit 7 of a
 */
uint8_t rot_r(cpu_t *cpu, uint8_t a)
{
    // Reset Flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Get value of carry for bit 7
    uint8_t carry = cpu->flags << 3;
    uint8_t high = a << 7;
    a = a >> 1;
    a |= carry;

    // Set carry to value of high bit
    cpu->flags |= (high >> 3);

    if (a == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    return a;
}

/**
 * Load the contents of memory specified by SP in lower byte of
 * destination register, and contents of SP + 1 in higer byte of
 * destination.
 */
void pop(cpu_t *cpu, mmu_t *mmu, reg16_t *dest)
{
    reg_set_lo(dest, mmu->memory[cpu->reg.sp.value]);
    cpu->reg.sp.value++;
    reg_set_hi(dest, mmu->memory[cpu->reg.sp.value]);
    cpu->reg.sp.value++;
}

/**
 * Push the contents of origin to the stack
 */
void push_reg(cpu_t *cpu, mmu_t *mmu, reg16_t *origin)
{
    push(cpu, mmu, reg_get_hi(origin), reg_get_lo(origin));
}

/**
 * Push hi and lo to the stack by 
 * first decrementing SP, and setting high byte, 
 * then decrement again and set low byte
 */
void push(cpu_t *cpu, mmu_t *mmu, uint8_t hi, uint8_t lo)
{
    cpu->reg.sp.value--;
    mmu->memory[cpu->reg.sp.value] = hi;
    cpu->reg.sp.value--;
    mmu->memory[cpu->reg.sp.value] = lo;
}

void jmp(cpu_t *cpu, mmu_t *mmu)
{
    reg_load_word(&cpu->reg.pc, 
        mmu->memory[cpu->reg.pc.value + 2],
        mmu->memory[cpu->reg.pc.value + 1]);
}

void load_cpu_cb_opcodes(cpu_t *cpu, opfunc_t *arr)
{
    arr[0x00] = (opfunc_t){};
    arr[0x7C] = (opfunc_t){&opfunc_CB_7C, 1, 4, 1};
}

uint8_t and_8x8(cpu_t *cpu, uint8_t a, uint8_t b)
{
    uint8_t result = a & b;

    // Clear flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Set Half carry by spec
    cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;

    if (result == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    return a;
}

void reg_a_xor(cpu_t *cpu, uint8_t value)
{
    // TODO rewrite to same system as AND

    reg16_t *af = reg_xor(&cpu->reg.af, true, value);
    uint8_t result = reg_get_hi(af);

    // Clear flags
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    // Clear flag
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);

    if (result == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }
}

uint8_t or_8x8(cpu_t *cpu, uint8_t a, uint8_t b)
{
    // Reset flags
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);

    uint8_t result = a | b;

    if (result == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    return result;
}

void cmp_values(cpu_t *cpu, uint8_t a, uint8_t b)
{
    // Compare is actually subtract b from a, and
    // discarding the results, the cpu flags matter here.
    sub_8x8(cpu, a, b);
}

void ret(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.pc);
}

void call(cpu_t *cpu, mmu_t *mmu)
{
    // Call is 1 byte instruction, + 2b arguments
    // The next instruction should be pushed to the stack,
    // which is at location pc + 2 and pc + 3
    push(cpu, mmu, cpu->reg.pc.value + 3, cpu->reg.pc.value + 2);
    reg_load_word(&cpu->reg.pc, cpu->reg.pc.value + 2, cpu->reg.pc.value + 1);
}

void opfunc_00(cpu_t *cpu, mmu_t *mmu)
{
    // No op, just advance counter
}

void opfunc_halt(cpu_t *cpu, mmu_t *mmu)
{
    cpu->halted = true;
}

void opfunc_01(cpu_t *cpu, mmu_t *mmu)
{
    reg_load_word(&cpu->reg.bc,
                  mmu_read_byte(mmu, cpu->reg.pc.value + 2),
                  mmu_read_byte(mmu, cpu->reg.pc.value + 1));
}

void opfunc_02(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.bc.value] = reg_get_hi(&cpu->reg.af);
}

void opfunc_03(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.bc.value++;
}

void opfunc_04(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.bc, true);
}

void opfunc_05(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.bc, true);
}

void opfunc_06(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_07(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, rot_lc(cpu, reg_get_hi(&cpu->reg.af)));
}

void opfunc_08(cpu_t *cpu, mmu_t *mmu)
{
    // Store value of stackpointer SP at address pc + 1 and + 2 little
    // little endian wise
    mmu->memory[cpu->reg.pc.value + 1] = reg_get_lo(&cpu->reg.sp);
    mmu->memory[cpu->reg.pc.value + 2] = reg_get_hi(&cpu->reg.sp);

}

void opfunc_09(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value = add_16x16(cpu, cpu->reg.hl.value, cpu->reg.bc.value);
}

void opfunc_0A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.bc.value]);
}

void opfunc_0B(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.bc.value--;
}

void opfunc_0C(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.bc, false);
}

void opfunc_0D(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.bc, false);
}

void opfunc_0E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_0F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        rot_rc(cpu, reg_get_hi(&cpu->reg.af)));
}

void opfunc_10(cpu_t *cpu, mmu_t *mmu)
{
    if (!cpu->ime)
    {
        cpu->halted = true;
    }
}

void opfunc_11(cpu_t *cpu, mmu_t *mmu)
{
    reg_load_word(&cpu->reg.de,
                  mmu_read_byte(mmu, cpu->reg.pc.value + 2),
                  mmu_read_byte(mmu, cpu->reg.pc.value + 1));
}

void opfunc_12(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.de.value] = reg_get_hi(&cpu->reg.af);
}

void opfunc_13(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.de.value++;
}

void opfunc_14(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.de, true);
}

void opfunc_15(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.de, true);
}

void opfunc_16(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_17(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, rot_l(cpu, reg_get_hi(&cpu->reg.af)));
}

void opfunc_18(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.pc.value += mmu->memory[cpu->reg.pc.value];
}

void opfunc_19(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value = add_16x16(cpu, cpu->reg.hl.value, cpu->reg.de.value);
}

void opfunc_1A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.de.value]);
}

void opfunc_1B(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.de.value--;
}

void opfunc_1C(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.de, false);
}

void opfunc_1D(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.de, false);
}

void opfunc_1E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_1F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        rot_r(cpu, reg_get_hi(&cpu->reg.af)));
}

void opfunc_20(cpu_t *cpu, mmu_t *mmu)
{
    // Jump if zero flag is not set
    if (!(cpu->flags & CPU_ZERO_FLAG_BIT))
    {
        cpu->reg.pc.value += mmu_read_byte(mmu, cpu->reg.pc.value);
    }
    else
    {
        // Substract 4 cycles, as we are not jumping
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 2;
    }
}

void opfunc_21(cpu_t *cpu, mmu_t *mmu)
{
    reg_load_word(&cpu->reg.hl,
                  mmu_read_byte(mmu, cpu->reg.pc.value + 2),
                  mmu_read_byte(mmu, cpu->reg.pc.value + 1));
}

void opfunc_22(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.af);
    cpu->reg.hl.value++;
}

void opfunc_23(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value++;
}

void opfunc_24(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.hl, true);
}

void opfunc_25(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.hl, true);
}

void opfunc_26(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, mmu->memory[cpu->reg.pc.value + 1]);
}

/**
 * Adjust register A to valid BCD (Binary Coded Decimal)
 * representation
 * 
 * Substract flag is unaffected, Haf carry is reset, 
 * rest is set accordingly
 */
void opfunc_27(cpu_t *cpu, mmu_t *mmu)
{
    // Reset all except substract
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_CARRY_FLAG_BIT);
    cpu->flags &= ~(CPU_ZERO_FLAG_BIT);

    // Algorithm shamelessly copied from:
    // https://stackoverflow.com/questions/13247647/convert-integer-from-pure-binary-to-bcd
    uint8_t a = reg_get_hi(&cpu->reg.af);
    uint8_t result;
    uint8_t shift;

    while (a > 0)
    {
        // Or existing value with the modulus 10 value, left shifted by loop count
        // initial run shift will be 0, so none will happen
        result |= (a % 10) << (shift++ << 2);
        a /= 10;
        // subsequent run will shift result of (a / 10) mod 10 left by 4 bits,
        // then 8 bits, etc.
    }

    if (result == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    if (reg_get_hi(&cpu->reg.af) & 0x90 == 0x90)
    {
        // Carry will happen to third deicmal place,
        // set flag
        cpu->flags |= CPU_CARRY_FLAG_BIT;
    }
    
    
    reg_set_hi(&cpu->reg.af, result);
}

void opfunc_28(cpu_t *cpu, mmu_t *mmu)
{
    // Jump if zero flag is set
    if (cpu->flags & CPU_ZERO_FLAG_BIT)
    {
        cpu->reg.pc.value += mmu_read_byte(mmu, cpu->reg.pc.value);
    }
    else
    {
        // Substract 4 cycles, as we are not jumping
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 2;
    }
}

void opfunc_29(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value = add_16x16(cpu, cpu->reg.hl.value, cpu->reg.hl.value);
}

void opfunc_2A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.hl.value]);
    cpu->reg.hl.value++;
}

void opfunc_2B(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value--;
}

void opfunc_2C(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.hl, false);
}

void opfunc_2D(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.hl, false);
}

void opfunc_2E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_2F(cpu_t *cpu, mmu_t *mmu)
{
    // Set substract and halfcarry reg flag, leave rest
    cpu->flags |= CPU_SUBSTRACT_FLAG_BIT;
    cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;

    // Flip all bits in reg A (complements of A)
    reg_set_hi(&cpu->reg.af, ~reg_get_hi(&cpu->reg.af));
}

void opfunc_30(cpu_t *cpu, mmu_t *mmu)
{
    // Jump if carry flag is not set
    if (!(cpu->flags & CPU_CARRY_FLAG_BIT))
    {
        cpu->reg.pc.value += mmu_read_byte(mmu, cpu->reg.pc.value);
    }
    else
    {
        // Substract 4 cycles, as we are not jumping
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 2;
    }
}

void opfunc_31(cpu_t *cpu, mmu_t *mmu)
{
    reg_load_word(&cpu->reg.sp,
                  mmu->memory[cpu->reg.pc.value + 2],
                  mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_32(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.af);
    cpu->reg.hl.value--;
}

void opfunc_33(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.sp.value++;
}

void opfunc_34(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] =
        increment(cpu, mmu->memory[cpu->reg.hl.value], 1);
}

void opfunc_35(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] =
        decrement(cpu, mmu->memory[cpu->reg.hl.value], 1);
}

void opfunc_36(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = mmu->memory[cpu->reg.pc.value + 1];
}

/**
 * Set carry flag
 */
void opfunc_37(cpu_t *cpu, mmu_t *mmu)
{
    // Zero flag unaffected, reset rest
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    cpu->flags &= ~(CPU_HALF_CARRY_FLAG_BIT);

    // Set carry flag
    cpu->flags |= CPU_CARRY_FLAG_BIT;
}

void opfunc_38(cpu_t *cpu, mmu_t *mmu)
{
    // Jump if zero flag is set
    if (cpu->flags & CPU_CARRY_FLAG_BIT)
    {
        cpu->reg.pc.value += mmu_read_byte(mmu, cpu->reg.pc.value);
    }
    else
    {
        // Substract 4 cycles, as we are not jumping
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 2;
    }
}

void opfunc_39(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.hl.value = add_16x16(cpu, cpu->reg.hl.value, cpu->reg.sp.value);
}

void opfunc_3A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.hl.value]);
    cpu->reg.hl.value--;
}

void opfunc_3B(cpu_t *cpu, mmu_t *mmu)
{
    cpu->reg.sp.value--;
}

void opfunc_3C(cpu_t *cpu, mmu_t *mmu)
{
    register_increment(cpu, &cpu->reg.af, true);
}

void opfunc_3D(cpu_t *cpu, mmu_t *mmu)
{
    register_decrement(cpu, &cpu->reg.af, true);
}

void opfunc_3E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.pc.value + 1]);
}

void opfunc_3F(cpu_t *cpu, mmu_t *mmu)
{
    uint8_t c = cpu->flags & CPU_CARRY_FLAG_BIT;
    uint8_t z = cpu->flags & CPU_ZERO_FLAG_BIT;
    // Flip carry flag bit
    // But zero bit flag is unaffected, rest is reset
    cpu->flags = ~c + z;
}

void opfunc_40(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_hi(&cpu->reg.bc));
}

void opfunc_41(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_lo(&cpu->reg.bc));
}

void opfunc_42(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_hi(&cpu->reg.de));
}

void opfunc_43(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_lo(&cpu->reg.de));
}

void opfunc_44(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_hi(&cpu->reg.hl));
}

void opfunc_45(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_lo(&cpu->reg.hl));
}

void opfunc_46(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_47(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.bc, reg_get_hi(&cpu->reg.af));
}

void opfunc_48(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_hi(&cpu->reg.bc));
}

void opfunc_49(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_lo(&cpu->reg.bc));
}

void opfunc_4A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_hi(&cpu->reg.de));
}

void opfunc_4B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_lo(&cpu->reg.de));
}

void opfunc_4C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_hi(&cpu->reg.hl));
}

void opfunc_4D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_lo(&cpu->reg.hl));
}

void opfunc_4E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_4F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.bc, reg_get_lo(&cpu->reg.af));
}

void opfunc_50(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_hi(&cpu->reg.bc));
}

void opfunc_51(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_lo(&cpu->reg.bc));
}

void opfunc_52(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_hi(&cpu->reg.de));
}

void opfunc_53(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_lo(&cpu->reg.de));
}

void opfunc_54(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_hi(&cpu->reg.hl));
}

void opfunc_55(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_lo(&cpu->reg.hl));
}

void opfunc_56(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_57(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.de, reg_get_hi(&cpu->reg.af));
}

void opfunc_58(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_hi(&cpu->reg.bc));
}

void opfunc_59(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_lo(&cpu->reg.bc));
}

void opfunc_5A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_hi(&cpu->reg.de));
}

void opfunc_5B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_lo(&cpu->reg.de));
}

void opfunc_5C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_hi(&cpu->reg.hl));
}

void opfunc_5D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_lo(&cpu->reg.hl));
}

void opfunc_5E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_5F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.de, reg_get_hi(&cpu->reg.af));
}

void opfunc_60(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_hi(&cpu->reg.bc));
}

void opfunc_61(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_lo(&cpu->reg.bc));
}

void opfunc_62(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_hi(&cpu->reg.de));
}

void opfunc_63(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_lo(&cpu->reg.de));
}

void opfunc_64(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_hi(&cpu->reg.hl));
}

void opfunc_65(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_lo(&cpu->reg.hl));
}

void opfunc_66(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_67(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.hl, reg_get_hi(&cpu->reg.af));
}

void opfunc_68(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_hi(&cpu->reg.bc));
}

void opfunc_69(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_lo(&cpu->reg.bc));
}

void opfunc_6A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_hi(&cpu->reg.de));
}

void opfunc_6B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_lo(&cpu->reg.de));
}

void opfunc_6C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_hi(&cpu->reg.hl));
}

void opfunc_6D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_lo(&cpu->reg.hl));
}

void opfunc_6E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_6F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_lo(&cpu->reg.hl, reg_get_hi(&cpu->reg.af));
}

void opfunc_70(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.bc);
}

void opfunc_71(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_lo(&cpu->reg.bc);
}

void opfunc_72(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.de);
}

void opfunc_73(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_lo(&cpu->reg.de);
}

void opfunc_74(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.hl);
}

void opfunc_75(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_lo(&cpu->reg.hl);
}

void opfunc_77(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = reg_get_hi(&cpu->reg.af);
}

void opfunc_78(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_hi(&cpu->reg.bc));
}

void opfunc_79(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_lo(&cpu->reg.bc));
}

void opfunc_7A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_hi(&cpu->reg.de));
}

void opfunc_7B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_lo(&cpu->reg.de));
}

void opfunc_7C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_hi(&cpu->reg.hl));
}

void opfunc_7D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_lo(&cpu->reg.hl));
}

void opfunc_7E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_7F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, reg_get_hi(&cpu->reg.af));
}

void opfunc_80(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_81(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_82(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_83(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_84(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_85(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_86(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_87(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_88(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_89(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_8A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_8B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_8C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_8D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_8E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_8F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_90(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_91(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_92(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_93(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_94(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_95(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_96(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_97(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_98(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_99(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_9A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_9B(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_9C(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_9D(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_9E(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_9F(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_A0(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_A1(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_A2(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_A3(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_A4(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_A5(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_A6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_A7(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af,
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_A8(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_hi(&cpu->reg.bc));
}

void opfunc_A9(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_lo(&cpu->reg.bc));
}

void opfunc_AA(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_hi(&cpu->reg.de));
}

void opfunc_AB(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_lo(&cpu->reg.de));
}

void opfunc_AC(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_hi(&cpu->reg.hl));
}

void opfunc_AD(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_lo(&cpu->reg.hl));
}

void opfunc_AE(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_hi(&cpu->reg.hl));
    reg_a_xor(cpu, reg_get_lo(&cpu->reg.hl));
}

void opfunc_AF(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, reg_get_hi(&cpu->reg.af));
}

void opfunc_B0(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc)));
}

void opfunc_B1(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc)));
}

void opfunc_B2(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de)));
}

void opfunc_B3(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de)));
}

void opfunc_B4(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl)));
}

void opfunc_B5(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl)));
}

void opfunc_B6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]));
}

void opfunc_B7(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af)));
}

void opfunc_B8(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.bc));
}

void opfunc_B9(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.bc));
}

void opfunc_BA(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.de));
}

void opfunc_BB(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.de));
}

void opfunc_BC(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.hl));
}

void opfunc_BD(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_lo(&cpu->reg.hl));
}

void opfunc_BE(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.hl.value]);
}

void opfunc_BF(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), reg_get_hi(&cpu->reg.af));
}

void opfunc_C0(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_ZERO_FLAG_BIT))
    {
        ret(cpu, mmu);
    }
    else
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 1;
    }
}

void opfunc_C1(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.bc);
}

void opfunc_C2(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_ZERO_FLAG_BIT))
    {
        jmp(cpu, mmu);
    }
    else
    {
        // correct to much cycles
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }
    
}

void opfunc_C3(cpu_t *cpu, mmu_t *mmu)
{
    jmp(cpu, mmu);
}

void opfunc_C4(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_ZERO_FLAG_BIT))
    {
        call(cpu, mmu);
    }
    else 
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }
}

void opfunc_C5(cpu_t *cpu, mmu_t *mmu)
{
    push_reg(cpu, mmu, &cpu->reg.bc);
}

void opfunc_C6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        add_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_C8(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_ZERO_FLAG_BIT)
    {
        ret(cpu, mmu);
    }
    else
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 1;
    }
}

void opfunc_C9(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.pc);
}

void opfunc_CA(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_ZERO_FLAG_BIT)
    {
        jmp(cpu, mmu);
    }
    else
    {
        // correct to much cycles
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }  
}

void opfunc_CC(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_ZERO_FLAG_BIT)
    {
        call(cpu, mmu);
    }
    else 
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }
}

void opfunc_CD(cpu_t *cpu, mmu_t *mmu)
{
    call(cpu, mmu);
}

void opfunc_CE(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        adc_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_D0(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_CARRY_FLAG_BIT))
    {
        ret(cpu, mmu);
    }
    else
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 1;
    }
}

void opfunc_D1(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.de);
}

void opfunc_D2(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_CARRY_FLAG_BIT))
    {
        jmp(cpu, mmu);
    }
    else
    {
        // correct to much cycles
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }  
}

void opfunc_D4(cpu_t *cpu, mmu_t *mmu)
{
    if (!(cpu->flags & CPU_CARRY_FLAG_BIT))
    {
        call(cpu, mmu);
    }
    else 
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }
}

void opfunc_D5(cpu_t *cpu, mmu_t *mmu)
{
    push_reg(cpu, mmu, &cpu->reg.de);
}

void opfunc_D6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        sub_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_D8(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_CARRY_FLAG_BIT)
    {
        ret(cpu, mmu);
    }
    else
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 1;
    }
}

void opfunc_D9(cpu_t *cpu, mmu_t *mmu)
{
    cpu->ime = false;
    pop(cpu, mmu, &cpu->reg.pc);
}

void opfunc_DA(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_CARRY_FLAG_BIT)
    {
        jmp(cpu, mmu);
    }
    else
    {
        // correct to much cycles
        cpu->tick -= 4;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }  
}

void opfunc_DC(cpu_t *cpu, mmu_t *mmu)
{
    if (cpu->flags & CPU_CARRY_FLAG_BIT)
    {
        call(cpu, mmu);
    }
    else 
    {
        cpu->tick -= 12;
        // PC will not increment (incr == 0)
        // adjust accordingly
        cpu->reg.pc.value += 3;
    }
}

void opfunc_DE(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        subc_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_E0(cpu_t *cpu, mmu_t *mmu)
{
    // Store a in internal RAM located at FF00 - FFFF
    // last byte of adress is argument
    // WHere:
    // 0xFF00-0xFF7F: Port/Mode registers, control register, sound register
    // 0xFF80-0xFFFE: Working & Stack RAM (127 bytes)
    // 0xFFFF: Interrupt Enable Regist
    uint16_t address = 0xFF00 & mmu->memory[cpu->reg.pc.value + 1];
    mmu->memory[address] = reg_get_hi(&cpu->reg.af);
}

void opfunc_E1(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.hl);
}

void opfunc_E2(cpu_t *cpu, mmu_t *mmu)
{
    // Store contents of reg A in location FF00 & value reg C
    uint16_t address = 0xFF00 & mmu->memory[reg_get_lo(&cpu->reg.bc)];
    mmu->memory[address] = reg_get_hi(&cpu->reg.af);
}

void opfunc_E5(cpu_t *cpu, mmu_t *mmu)
{
    push_reg(cpu, mmu, &cpu->reg.hl);
}

void opfunc_E6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        and_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_EA(cpu_t *cpu, mmu_t *mmu)
{
    // Store value of reg A in ram location specified by opcode argument 2bytes
    // ls byte first
    uint8_t address = mmu->memory[cpu->reg.pc.value + 1] | 
        (0xFF00 & mmu->memory[cpu->reg.pc.value + 2]);
    mmu->memory[address] = reg_get_hi(&cpu->reg.af);
}

void opfunc_EE(cpu_t *cpu, mmu_t *mmu)
{
    reg_a_xor(cpu, mmu->memory[cpu->reg.sp.value + 1]);
}

void opfunc_F0(cpu_t *cpu, mmu_t *mmu)
{
    // Load in reg A the value stored in range FF00-FFFF, specified
    // by opcode argument
    uint8_t value = mmu->memory[0xFF00 & mmu->memory[cpu->reg.pc.value + 1]];
    reg_set_hi(&cpu->reg.af, value);
}

void opfunc_F1(cpu_t *cpu, mmu_t *mmu)
{
    pop(cpu, mmu, &cpu->reg.af);
}

void opfunc_F2(cpu_t *cpu, mmu_t *mmu)
{
    // Load in reg A the value stored in range FF00-FFFF, specified
    // by FF00 & value reg C
    uint8_t value = mmu->memory[0xFF00 & mmu->memory[reg_get_lo(&cpu->reg.bc)]];
    reg_set_hi(&cpu->reg.af, value);
}

void opfunc_F3(cpu_t *cpu, mmu_t *mmu)
{
    cpu->ime = false;
}

void opfunc_F5(cpu_t *cpu, mmu_t *mmu)
{
    push_reg(cpu, mmu, &cpu->reg.af);
}

void opfunc_F6(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, 
        or_8x8(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]));
}

void opfunc_FA(cpu_t *cpu, mmu_t *mmu)
{
    // Store in reg A the value in ram location specified by 
    // opcode argument 2bytes, ls byte first
    uint8_t address = mmu->memory[cpu->reg.pc.value + 1] | 
        (0xFF00 & mmu->memory[cpu->reg.pc.value + 2]);
    reg_set_hi(&cpu->reg.af, mmu->memory[address]);
}

void opfunc_FB(cpu_t *cpu, mmu_t *mmu)
{
    cpu->ime = true;
}

void opfunc_FE(cpu_t *cpu, mmu_t *mmu)
{
    cmp_values(cpu, reg_get_hi(&cpu->reg.af), mmu->memory[cpu->reg.sp.value + 1]);
}

void opfunc_FF(cpu_t *cpu, mmu_t *mmu)
{
    push(cpu, mmu, reg_get_hi(&cpu->reg.pc), reg_get_lo(&cpu->reg.pc));
    cpu->reg.pc.value = 0x0038;
}

void opfunc_CB_7C(cpu_t *cpu, mmu_t *mmu)
{
    cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);
    // Get the value of the 7th bit of register H
    uint8_t value = reg_get_hi(&cpu->reg.hl) & (1 << 6);
    // Set the Z flag to the complement of value
    cpu->flags |= (~value) << 1; // 7th bit set, Z flag is 8th bit
}
