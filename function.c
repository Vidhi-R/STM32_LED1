#include <stdint.h>
#include "stm32f10x.h"

// LED: 1 time on and off

int main(){
	RCC->APB2ENR |= (1<<4); // SET CLOCK 
	int i=0,N=500000;
	//Config and MODE
	GPIOC->CRH &= ~(1<<20);
	GPIOC->CRH |=  (1<<21);
	GPIOC->CRH &= ~(1<<22);
	GPIOC->CRH &= ~(1<<23);
	while(1){
	for(i=0;i<N;i++){}
	GPIOC->ODR |= (1<<13);   //ODR HIGH
	for(i=0;i<N;i++){}
	GPIOC->ODR &= ~(1<<13);  // ODR LOW
	}
}