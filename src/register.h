#ifndef _REGISTER_H
#define _REGISTER_H

#include <stdint.h>
#include <stdbool.h>

/*
Gameboy has the following register structure:
|15..8|7..0|
|---|---|
| A | F |
| B | C |
| D | E |
| H | L |
|   SP  |
|   PC  |

Where each register, except SP and PC are 8 bit
A up to L could be set together, and be adrressed as AF, etc.
Following that, we handle each register as the combined ones, 16 bit.
And allow individual access to the upper and lowe portion of the type.

*/
typedef struct reg16_t
{
    uint16_t value;
} reg16_t;

uint8_t reg_get_hi(reg16_t *reg);
void reg_set_hi(reg16_t *reg, uint8_t value);
uint8_t reg_get_lo(reg16_t *reg);
void reg_set_lo(reg16_t *reg, uint8_t value);

void reg_load_word(reg16_t *reg, uint8_t hi, uint8_t lo);
reg16_t * reg_xor(reg16_t *reg, bool upper, uint8_t value);

#endif
