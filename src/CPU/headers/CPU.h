// definition of the memory & registers of the CPU
#IFNDEF CPU.h
#DEFINE CUP.h

#include <stdint.h>

struct CPU
{
     uint8_t RAM[0x800];       // $0000 - $07FF mirrored from $800 - $1FFF
     uint8_t PPUreg[0x8];      // $2000 - $2007 mirrored from $2008 - $3FFF
     uint8_t APU_IO[0x18];     // APU and I/O registers  
     uint8_t APU_IO_Test[0x8]; // probably low priority, normally disabled
     uint8_t Unmapped[0xBFE0]; // probably not needed here
     
     // registers
     uint8_t A; // accumulator
     uint8_t X; // index X
     uint8_t Y; // index Y
     uint8_t PC[2]; // Program Counter
     uint8_t S; // stack pointer
     uint8_t P; // status register -> 6 bits but is 1byte wide.
};

/*
  -- register bits --
  7  bit  0
  ---- ----
  NV1B DIZC
  |||| ||||
  |||| |||+- Carry
  |||| ||+-- Zero
  |||| |+--- Interrupt Disable
  |||| +---- Decimal
  |||+------ (No CPU effect; see: the B flag)
  ||+------- (No CPU effect; always pushed as 1)
  |+-------- Overflow
  +--------- Negative
 */


