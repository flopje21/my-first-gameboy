#include "cpu_opcodes.h"
#include "register.h"

void load_cpu_opcodes(cpu_t *cpu, opfunc_t *arr)
{
    arr[0x00] = (opfunc_t){&opfunc_00, 1, 4};
    arr[0x01] = (opfunc_t){&opfunc_01, 3, 12};
    arr[0x02] = (opfunc_t){&opfunc_02, 1, 8};
    arr[0x03] = (opfunc_t){&opfunc_03, 1, 8};
    arr[0x04] = (opfunc_t){&opfunc_04, 1, 4};
    arr[0x05] = (opfunc_t){&opfunc_05, 1, 4};
    arr[0x06] = (opfunc_t){&opfunc_06, 2, 8};
    arr[0x0A] = (opfunc_t){&opfunc_0A, 1, 8};
    arr[0x0C] = (opfunc_t){&opfunc_0C, 1, 4};
    arr[0x0D] = (opfunc_t){&opfunc_0D, 1, 4};
    arr[0x0E] = (opfunc_t){&opfunc_0E, 2, 8};
    arr[0x11] = (opfunc_t){&opfunc_11, 3, 12};
    arr[0x12] = (opfunc_t){&opfunc_12, 1, 8};
    arr[0x13] = (opfunc_t){&opfunc_13, 1, 8};
    arr[0x14] = (opfunc_t){&opfunc_14, 1, 4};
    arr[0x15] = (opfunc_t){&opfunc_15, 1, 4};
    arr[0x16] = (opfunc_t){&opfunc_16, 2, 8};
    arr[0x1A] = (opfunc_t){&opfunc_1A, 1, 8};
    arr[0x1C] = (opfunc_t){&opfunc_1C, 1, 4};
    arr[0x1D] = (opfunc_t){&opfunc_1D, 1, 4};
    arr[0x1E] = (opfunc_t){&opfunc_1E, 2, 8};
    arr[0x20] = (opfunc_t){&opfunc_20, 2, 12};
    arr[0x21] = (opfunc_t){&opfunc_21, 3, 12};
    arr[0x22] = (opfunc_t){&opfunc_22, 1, 8};
    arr[0x23] = (opfunc_t){&opfunc_23, 1, 8};
    arr[0x24] = (opfunc_t){&opfunc_24, 1, 4};
    arr[0x25] = (opfunc_t){&opfunc_25, 1, 4};
    arr[0x26] = (opfunc_t){&opfunc_26, 2, 8};
    arr[0x2A] = (opfunc_t){&opfunc_2A, 1, 8};
    arr[0x2C] = (opfunc_t){&opfunc_2C, 1, 4};
    arr[0x2D] = (opfunc_t){&opfunc_2D, 1, 4};
    arr[0x2E] = (opfunc_t){&opfunc_2E, 1, 8};
    arr[0x31] = (opfunc_t){&opfunc_31, 3, 12};
    arr[0x32] = (opfunc_t){&opfunc_32, 1, 8};
    arr[0x33] = (opfunc_t){&opfunc_33, 1, 8};
    arr[0x34] = (opfunc_t){&opfunc_34, 1, 12};
    arr[0x35] = (opfunc_t){&opfunc_35, 1, 12};
    arr[0x36] = (opfunc_t){&opfunc_36, 1, 12};
    arr[0x3A] = (opfunc_t){&opfunc_3A, 1, 8};
    arr[0x3C] = (opfunc_t){&opfunc_3C, 1, 4};
    arr[0x3D] = (opfunc_t){&opfunc_3D, 1, 4};
    arr[0x3E] = (opfunc_t){&opfunc_3E, 2, 8};
    arr[0x3F] = (opfunc_t){&opfunc_3F, 1, 4};
    arr[0x40] = (opfunc_t){&opfunc_40, 1, 4};
    arr[0x41] = (opfunc_t){&opfunc_41, 1, 4};
    arr[0x42] = (opfunc_t){&opfunc_42, 1, 4};
    arr[0x43] = (opfunc_t){&opfunc_43, 1, 4};
    arr[0x44] = (opfunc_t){&opfunc_44, 1, 4};
    arr[0x45] = (opfunc_t){&opfunc_45, 1, 4};
    arr[0x46] = (opfunc_t){&opfunc_46, 1, 8};
    arr[0x47] = (opfunc_t){&opfunc_47, 1, 4};
    arr[0x48] = (opfunc_t){&opfunc_48, 1, 4};
    arr[0x49] = (opfunc_t){&opfunc_49, 1, 4};
    arr[0x4A] = (opfunc_t){&opfunc_4A, 1, 4};
    arr[0x4B] = (opfunc_t){&opfunc_4B, 1, 4};
    arr[0x4C] = (opfunc_t){&opfunc_4C, 1, 4};
    arr[0x4D] = (opfunc_t){&opfunc_4D, 1, 4};
    arr[0x4E] = (opfunc_t){&opfunc_4E, 1, 8};
    arr[0x4F] = (opfunc_t){&opfunc_4F, 1, 4};
    arr[0x50] = (opfunc_t){&opfunc_50, 1, 4};
    arr[0x51] = (opfunc_t){&opfunc_51, 1, 4};
    arr[0x52] = (opfunc_t){&opfunc_52, 1, 4};
    arr[0x53] = (opfunc_t){&opfunc_53, 1, 4};
    arr[0x54] = (opfunc_t){&opfunc_54, 1, 4};
    arr[0x55] = (opfunc_t){&opfunc_55, 1, 4};
    arr[0x56] = (opfunc_t){&opfunc_56, 1, 8};
    arr[0x57] = (opfunc_t){&opfunc_57, 1, 4};
    arr[0x58] = (opfunc_t){&opfunc_58, 1, 4};
    arr[0x59] = (opfunc_t){&opfunc_59, 1, 4};
    arr[0x5A] = (opfunc_t){&opfunc_5A, 1, 4};
    arr[0x5B] = (opfunc_t){&opfunc_5B, 1, 4};
    arr[0x5C] = (opfunc_t){&opfunc_5C, 1, 4};
    arr[0x5D] = (opfunc_t){&opfunc_5D, 1, 4};
    arr[0x5E] = (opfunc_t){&opfunc_5E, 1, 8};
    arr[0x5F] = (opfunc_t){&opfunc_5F, 1, 4};
    arr[0x60] = (opfunc_t){&opfunc_60, 1, 4};
    arr[0x61] = (opfunc_t){&opfunc_61, 1, 4};
    arr[0x62] = (opfunc_t){&opfunc_62, 1, 4};
    arr[0x63] = (opfunc_t){&opfunc_63, 1, 4};
    arr[0x64] = (opfunc_t){&opfunc_64, 1, 4};
    arr[0x65] = (opfunc_t){&opfunc_65, 1, 4};
    arr[0x66] = (opfunc_t){&opfunc_66, 1, 8};
    arr[0x67] = (opfunc_t){&opfunc_67, 1, 4};
    arr[0x68] = (opfunc_t){&opfunc_68, 1, 4};
    arr[0x69] = (opfunc_t){&opfunc_69, 1, 4};
    arr[0x6A] = (opfunc_t){&opfunc_6A, 1, 4};
    arr[0x6B] = (opfunc_t){&opfunc_6B, 1, 4};
    arr[0x6C] = (opfunc_t){&opfunc_6C, 1, 4};
    arr[0x6D] = (opfunc_t){&opfunc_6D, 1, 4};
    arr[0x6E] = (opfunc_t){&opfunc_6E, 1, 8};
    arr[0x6F] = (opfunc_t){&opfunc_6F, 1, 4};
    arr[0x70] = (opfunc_t){&opfunc_70, 1, 8};
    arr[0x71] = (opfunc_t){&opfunc_71, 1, 8};
    arr[0x72] = (opfunc_t){&opfunc_72, 1, 8};
    arr[0x73] = (opfunc_t){&opfunc_73, 1, 8};
    arr[0x74] = (opfunc_t){&opfunc_74, 1, 8};
    arr[0x75] = (opfunc_t){&opfunc_75, 1, 8};
    arr[0x76] = (opfunc_t){&opfunc_halt, 1, 4};
    arr[0x77] = (opfunc_t){&opfunc_77, 1, 8};
    arr[0x78] = (opfunc_t){&opfunc_78, 1, 4};
    arr[0x79] = (opfunc_t){&opfunc_79, 1, 4};
    arr[0x7A] = (opfunc_t){&opfunc_7A, 1, 4};
    arr[0x7B] = (opfunc_t){&opfunc_7B, 1, 4};
    arr[0x7C] = (opfunc_t){&opfunc_7C, 1, 4};
    arr[0x7D] = (opfunc_t){&opfunc_7D, 1, 4};
    arr[0x7E] = (opfunc_t){&opfunc_7E, 1, 8};
    arr[0x7F] = (opfunc_t){&opfunc_7F, 1, 4};

    arr[0xA8] = (opfunc_t){&opfunc_A8, 1, 4};
    arr[0xA9] = (opfunc_t){&opfunc_A9, 1, 4};
    arr[0xAA] = (opfunc_t){&opfunc_AA, 1, 4};
    arr[0xAB] = (opfunc_t){&opfunc_AB, 1, 4};
    arr[0xAC] = (opfunc_t){&opfunc_AC, 1, 4};
    arr[0xAD] = (opfunc_t){&opfunc_AD, 1, 4};
    arr[0xAE] = (opfunc_t){&opfunc_AE, 1, 8};
    arr[0xAF] = (opfunc_t){&opfunc_AF, 1, 4};

    arr[0xCB] = (opfunc_t){NULL, 1, 4}; // Initial CB opcode is 1 byte, takes 4 cycles
}

void register_increment(cpu_t *cpu, reg16_t *reg, bool hi)
{
    uint8_t old_value;
    if (hi)
    {
        old_value = reg_get_hi(reg);
        reg_set_hi(reg, increment_value(cpu, old_value));
    }
    else
    {
        old_value = reg_get_lo(reg);
        reg_set_lo(reg, increment_value(cpu, old_value));
    }
}

void register_decrement(cpu_t *cpu, reg16_t *reg, bool hi)
{
    uint8_t old_value;
    if (hi)
    {
        old_value = reg_get_hi(reg);
        reg_set_hi(reg, decrement_value(cpu, old_value));
    }
    else
    {
        old_value = reg_get_lo(reg);
        reg_set_lo(reg, decrement_value(cpu, old_value));
    }
}

// Increment current value with increment, set correct flags and return
// incremented value
uint8_t increment_value(cpu_t *cpu, uint8_t current)
{
    uint8_t new_value = current + 1;

    // Clear substract flag
    cpu->flags &= ~(CPU_SUBSTRACT_FLAG_BIT);

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

uint8_t decrement_value(cpu_t *cpu, uint8_t current)
{
    uint8_t new_value = current - 1;

    // Set substract flag
    cpu->flags |= (CPU_SUBSTRACT_FLAG_BIT);

    // Check for zero value
    if (new_value == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }

    // Check for half carry
    if (current & 0xF == 0x10)
    {
        cpu->flags |= CPU_HALF_CARRY_FLAG_BIT;
    }
}

bool test_half_carry(uint8_t current_value, uint8_t add_value)
{
    return ((current_value & 0x0F) + (add_value & 0x0F)) & 0x10 == 0x10;
}

void load_cpu_cb_opcodes(cpu_t *cpu, opfunc_t *arr)
{
    arr[0x00] = (opfunc_t){};
    arr[0x7C] = (opfunc_t){&opfunc_CB_7C, 1, 4};
}

void reg_a_xor(cpu_t *cpu, uint8_t value)
{
    reg16_t *af = reg_xor(&cpu->reg.af, true, value);
    uint8_t result = reg_get_hi(af);

    if (result == 0x00)
    {
        cpu->flags |= CPU_ZERO_FLAG_BIT;
    }
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
    cpu->reg.bc.value += 1;
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

void opfunc_0A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.bc.value]);
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
    cpu->reg.de.value += 1;
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

void opfunc_1A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.de.value]);
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

void opfunc_20(cpu_t *cpu, mmu_t *mmu)
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
    cpu->reg.hl.value += 1;
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

void opfunc_2A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.hl.value]);
    cpu->reg.hl.value++;
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
    cpu->reg.sp.value += 1;
}

void opfunc_34(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] =
        increment_value(cpu, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_35(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] =
        decrement_value(cpu, mmu->memory[cpu->reg.hl.value]);
}

void opfunc_36(cpu_t *cpu, mmu_t *mmu)
{
    mmu->memory[cpu->reg.hl.value] = mmu->memory[cpu->reg.pc.value + 1];
}

void opfunc_3A(cpu_t *cpu, mmu_t *mmu)
{
    reg_set_hi(&cpu->reg.af, mmu->memory[cpu->reg.hl.value]);
    cpu->reg.hl.value--;
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

// todo: continue from here

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

void opfunc_CB_7C(cpu_t *cpu, mmu_t *mmu)
{
    // Get the value of the 7th bit of register H
    uint8_t value = reg_get_hi(&cpu->reg.hl) & (1 << 6);
    // Set the Z flag to the complement of value
    cpu->flags |= (~value) << 1; // 7th bit set, Z flag is 8th bit
}
