#include <stdint.h>
#include "startup.h"
#include "gpio_drive.h"

__attribute__((section(".vector_table")))

const vector_table_t vectors[] = {
  {.stack_top = &_stack_ptr},
  Reset_Handler,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  SysTick_Handler
};

void Reset_Handler(void)
{
  uint32_t *src, *dest;

  src = &_etext;
  for (dest = &_data; dest < &_edata;)
  {
    *dest++ = *src++;
  }

  for (dest = &_bss; dest < &_ebss;)
  {
    *dest++ = 0;
  }

  main();
}

void SysTick_Handler(void)
{
}
