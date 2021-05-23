#ifndef _CPU_OPCODES_H
#define _CPU_OPCODES_H

#include "cpu.h"
#include "mmu.h"
#include "register.h"

void load_cpu_opcodes(cpu_t *cpu, opfunc_t *arr);
void load_cpu_cb_opcodes(cpu_t *cpu, opfunc_t *arr);
void register_increment(cpu_t *cpu, reg16_t *reg, bool hi);
uint8_t increment_value(cpu_t *cpu, uint8_t current);
uint8_t decrement_value(cpu_t *cpu, uint8_t current);
bool test_half_carry(uint8_t old_value, uint8_t new_value);

void reg_a_xor(cpu_t *cpu, uint8_t value);
void reg_load(cpu_t *cpu, mmu_t *mmu);
void opfunc_halt(cpu_t *cpu, mmu_t *mmu);

void opfunc_00(cpu_t *cpu, mmu_t *mmu);
void opfunc_01(cpu_t *cpu, mmu_t *mmu);
void opfunc_02(cpu_t *cpu, mmu_t *mmu);
void opfunc_03(cpu_t *cpu, mmu_t *mmu);
void opfunc_04(cpu_t *cpu, mmu_t *mmu);
void opfunc_05(cpu_t *cpu, mmu_t *mmu);
void opfunc_06(cpu_t *cpu, mmu_t *mmu);
void opfunc_0A(cpu_t *cpu, mmu_t *mmu);
void opfunc_0C(cpu_t *cpu, mmu_t *mmu);
void opfunc_0D(cpu_t *cpu, mmu_t *mmu);
void opfunc_0E(cpu_t *cpu, mmu_t *mmu);
void opfunc_11(cpu_t *cpu, mmu_t *mmu);
void opfunc_12(cpu_t *cpu, mmu_t *mmu);
void opfunc_13(cpu_t *cpu, mmu_t *mmu);
void opfunc_14(cpu_t *cpu, mmu_t *mmu);
void opfunc_15(cpu_t *cpu, mmu_t *mmu);
void opfunc_16(cpu_t *cpu, mmu_t *mmu);
void opfunc_1A(cpu_t *cpu, mmu_t *mmu);
void opfunc_1C(cpu_t *cpu, mmu_t *mmu);
void opfunc_1D(cpu_t *cpu, mmu_t *mmu);
void opfunc_1E(cpu_t *cpu, mmu_t *mmu);
void opfunc_20(cpu_t *cpu, mmu_t *mmu);
void opfunc_21(cpu_t *cpu, mmu_t *mmu);
void opfunc_22(cpu_t *cpu, mmu_t *mmu);
void opfunc_23(cpu_t *cpu, mmu_t *mmu);
void opfunc_24(cpu_t *cpu, mmu_t *mmu);
void opfunc_25(cpu_t *cpu, mmu_t *mmu);
void opfunc_26(cpu_t *cpu, mmu_t *mmu);
void opfunc_2A(cpu_t *cpu, mmu_t *mmu);
void opfunc_2C(cpu_t *cpu, mmu_t *mmu);
void opfunc_2D(cpu_t *cpu, mmu_t *mmu);
void opfunc_2E(cpu_t *cpu, mmu_t *mmu);
void opfunc_31(cpu_t *cpu, mmu_t *mmu);
void opfunc_32(cpu_t *cpu, mmu_t *mmu);
void opfunc_33(cpu_t *cpu, mmu_t *mmu);
void opfunc_34(cpu_t *cpu, mmu_t *mmu);
void opfunc_35(cpu_t *cpu, mmu_t *mmu);
void opfunc_36(cpu_t *cpu, mmu_t *mmu);
void opfunc_3A(cpu_t *cpu, mmu_t *mmu);
void opfunc_3C(cpu_t *cpu, mmu_t *mmu);
void opfunc_3D(cpu_t *cpu, mmu_t *mmu);
void opfunc_3E(cpu_t *cpu, mmu_t *mmu);
void opfunc_3F(cpu_t *cpu, mmu_t *mmu);
void opfunc_40(cpu_t *cpu, mmu_t *mmu);
void opfunc_41(cpu_t *cpu, mmu_t *mmu);
void opfunc_42(cpu_t *cpu, mmu_t *mmu);
void opfunc_43(cpu_t *cpu, mmu_t *mmu);
void opfunc_44(cpu_t *cpu, mmu_t *mmu);
void opfunc_45(cpu_t *cpu, mmu_t *mmu);
void opfunc_46(cpu_t *cpu, mmu_t *mmu);
void opfunc_47(cpu_t *cpu, mmu_t *mmu);
void opfunc_48(cpu_t *cpu, mmu_t *mmu);
void opfunc_49(cpu_t *cpu, mmu_t *mmu);
void opfunc_4A(cpu_t *cpu, mmu_t *mmu);
void opfunc_4B(cpu_t *cpu, mmu_t *mmu);
void opfunc_4C(cpu_t *cpu, mmu_t *mmu);
void opfunc_4D(cpu_t *cpu, mmu_t *mmu);
void opfunc_4E(cpu_t *cpu, mmu_t *mmu);
void opfunc_4F(cpu_t *cpu, mmu_t *mmu);
void opfunc_50(cpu_t *cpu, mmu_t *mmu);
void opfunc_51(cpu_t *cpu, mmu_t *mmu);
void opfunc_52(cpu_t *cpu, mmu_t *mmu);
void opfunc_53(cpu_t *cpu, mmu_t *mmu);
void opfunc_54(cpu_t *cpu, mmu_t *mmu);
void opfunc_55(cpu_t *cpu, mmu_t *mmu);
void opfunc_56(cpu_t *cpu, mmu_t *mmu);
void opfunc_57(cpu_t *cpu, mmu_t *mmu);
void opfunc_58(cpu_t *cpu, mmu_t *mmu);
void opfunc_59(cpu_t *cpu, mmu_t *mmu);
void opfunc_5A(cpu_t *cpu, mmu_t *mmu);
void opfunc_5B(cpu_t *cpu, mmu_t *mmu);
void opfunc_5C(cpu_t *cpu, mmu_t *mmu);
void opfunc_5D(cpu_t *cpu, mmu_t *mmu);
void opfunc_5E(cpu_t *cpu, mmu_t *mmu);
void opfunc_5F(cpu_t *cpu, mmu_t *mmu);
void opfunc_60(cpu_t *cpu, mmu_t *mmu);
void opfunc_61(cpu_t *cpu, mmu_t *mmu);
void opfunc_62(cpu_t *cpu, mmu_t *mmu);
void opfunc_63(cpu_t *cpu, mmu_t *mmu);
void opfunc_64(cpu_t *cpu, mmu_t *mmu);
void opfunc_65(cpu_t *cpu, mmu_t *mmu);
void opfunc_66(cpu_t *cpu, mmu_t *mmu);
void opfunc_67(cpu_t *cpu, mmu_t *mmu);
void opfunc_68(cpu_t *cpu, mmu_t *mmu);
void opfunc_69(cpu_t *cpu, mmu_t *mmu);
void opfunc_6A(cpu_t *cpu, mmu_t *mmu);
void opfunc_6B(cpu_t *cpu, mmu_t *mmu);
void opfunc_6C(cpu_t *cpu, mmu_t *mmu);
void opfunc_6D(cpu_t *cpu, mmu_t *mmu);
void opfunc_6E(cpu_t *cpu, mmu_t *mmu);
void opfunc_6F(cpu_t *cpu, mmu_t *mmu);
void opfunc_70(cpu_t *cpu, mmu_t *mmu);
void opfunc_71(cpu_t *cpu, mmu_t *mmu);
void opfunc_72(cpu_t *cpu, mmu_t *mmu);
void opfunc_73(cpu_t *cpu, mmu_t *mmu);
void opfunc_74(cpu_t *cpu, mmu_t *mmu);
void opfunc_75(cpu_t *cpu, mmu_t *mmu);
// 76 is opfunc_halt()
void opfunc_77(cpu_t *cpu, mmu_t *mmu);
void opfunc_78(cpu_t *cpu, mmu_t *mmu);
void opfunc_79(cpu_t *cpu, mmu_t *mmu);
void opfunc_7A(cpu_t *cpu, mmu_t *mmu);
void opfunc_7B(cpu_t *cpu, mmu_t *mmu);
void opfunc_7C(cpu_t *cpu, mmu_t *mmu);
void opfunc_7D(cpu_t *cpu, mmu_t *mmu);
void opfunc_7E(cpu_t *cpu, mmu_t *mmu);
void opfunc_7F(cpu_t *cpu, mmu_t *mmu);

void opfunc_A8(cpu_t *cpu, mmu_t *mmu);
void opfunc_A9(cpu_t *cpu, mmu_t *mmu);
void opfunc_AA(cpu_t *cpu, mmu_t *mmu);
void opfunc_AB(cpu_t *cpu, mmu_t *mmu);
void opfunc_AC(cpu_t *cpu, mmu_t *mmu);
void opfunc_AD(cpu_t *cpu, mmu_t *mmu);
void opfunc_AF(cpu_t *cpu, mmu_t *mmu);
void opfunc_AE(cpu_t *cpu, mmu_t *mmu);
void opfunc_EE(cpu_t *cpu, mmu_t *mmu);

// CB Opcodes
void opfunc_CB_7C(cpu_t *cpu, mmu_t *mmu);

#endif