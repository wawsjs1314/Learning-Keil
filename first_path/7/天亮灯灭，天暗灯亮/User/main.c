#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "LightSensor.h"

int main(void)
{
	LightSensor_Init();
	LED_Init();
	
	while(1)
	{
		if(LightSensor_Get() == 1)
		{
			LED_ON();
		}
		else
		{
			LED_OFF();
		}
	}
	
}
