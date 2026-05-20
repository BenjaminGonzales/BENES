#include <stdint.h>

typedef struct dummy_memory
{
     uint8_t accumulator;
     uint8_t X;
     uint8_t Y;
     uint8_t memory[0xFFFF];
} dm_t;

void four_cycle_add(dm_t *dmem, int a, int b)
{
     dmem->X = a;
     dmem->Y = b;
     dmem->accumulator = a + b;
}
