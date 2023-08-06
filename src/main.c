#include "systick_time.h"
#include "gpio_drive.h"

int main(void)
{
	initGPIO(B, 0, OUTPUT50, GP_PP);
	initGPIO(B, 1, OUTPUT50, GP_PP);
	initGPIO(B, 10, OUTPUT50, GP_PP);
	initGPIO(B, 11, OUTPUT50, GP_PP);
	systick_init();

	while(1){
		writeGPIO(B, 0, 1);
		writeGPIO(B, 1, 0);
		writeGPIO(B, 10, 0);
		writeGPIO(B, 11, 0);
		DelayMs(1);
		writeGPIO(B, 0, 0);
		writeGPIO(B, 1, 1);
		writeGPIO(B, 10, 0);
		writeGPIO(B, 11, 0);
		DelayMs(1);
		writeGPIO(B, 0, 0);
		writeGPIO(B, 1, 0);
		writeGPIO(B, 10, 1);
		writeGPIO(B, 11, 0);
		DelayMs(1);
		writeGPIO(B, 0, 0);
		writeGPIO(B, 1, 0);
		writeGPIO(B, 10, 0);
		writeGPIO(B, 11, 1);
		DelayMs(1);
	}
}


