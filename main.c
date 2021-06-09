#include "stm32f4xx_hal.h"

int main(){
	
	RCC ->AHB1ENR |= 0x1;
	//RCC ->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
	
	GPIOA ->MODER |= 0x400;
	while(1){
		GPIOA ->BSRR |= 0x20;
		for(int i = 0; i<100000;i++);
		GPIOA ->BSRR |= 0x200000;
		for(int i = 0; i<100000;i++);
		
		
	}
	
}
