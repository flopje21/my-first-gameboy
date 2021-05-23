#include "register.h"

uint8_t reg_get_hi(reg16_t *reg)
{
    return (reg->value >> 8) & 0xFF;
}

void reg_set_hi(reg16_t *reg, const uint8_t value)
{
    reg->value = reg_get_lo(reg) | (value << 8);
}

uint8_t reg_get_lo(reg16_t *reg)
{
    return reg->value & 0xFF;
}

void reg_set_lo(reg16_t *reg, const uint8_t value)
{
    reg->value = reg_get_hi(reg) | (uint16_t) value;
}

void reg_load_word(reg16_t *reg, uint8_t hi, uint8_t lo)
{
    reg_set_lo(reg, lo);
    reg_set_hi(reg, hi);
}

reg16_t * reg_xor(reg16_t *reg, bool upper, uint8_t value)
{
    if (upper) {
        reg_set_hi(reg, reg_get_hi(reg) ^ value);
    } else {
        reg_set_lo(reg, reg_get_lo(reg) ^ value);
    }

    return reg;
}
