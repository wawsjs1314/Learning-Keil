#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "si2c.h"
#include "oled.h"
#include "stm32f10x_rcc.h"
#include "hyjk16.h"

SI2C_TypeDef si2c;
OLED_TypeDef oled;

void My_SoftwareI2C_Init(void);
void My_OLEDScreen_Init(void);
int i2c_write_bytes(uint8_t addr,const uint8_t *pdata,uint16_t size);

int main(void)
{
	My_SoftwareI2C_Init();
	My_OLEDScreen_Init();
	
	OLED_SetPen(&oled,PEN_COLOR_WHITE,1);
	OLED_SetBrush(&oled,PEN_COLOR_TRANSPARENT );
	OLED_SetCursor(&oled,12,50);
	OLED_DrawString(&oled,"2026090909013");
	
	//打印名字
	OLED_SetFont(&oled,&hyjk16);
	
	int16_t x = (OLED_GetScreenWidth(&oled) - OLED_GetStrWidth(&oled,"王以轩")) / 2;
	OLED_SetCursor(&oled,x,28);
	OLED_DrawString(&oled,"王以轩");
	
	OLED_SendBuffer(&oled);
	
	while(1)
	{
		
	}
}

void My_SoftwareI2C_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6 | GPIO_Pin_7;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD; 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOB, &GPIO_InitStructure);
	
	si2c.SCL_GPIOx = GPIOB;
	si2c.SCL_GPIO_Pin = GPIO_Pin_6;
	si2c.SDA_GPIOx = GPIOB;
	si2c.SDA_GPIO_Pin = GPIO_Pin_7;
}

int i2c_write_bytes(uint8_t addr,const uint8_t *pdata,uint16_t size)
{	
	return 	My_SI2C_SendBytes(&si2c,addr,pdata,size);
}

void My_OLEDScreen_Init(void)
{
	OLED_InitTypeDef OLED_InitStructure;
	
	OLED_InitStructure.i2c_write_cb = i2c_write_bytes ;
	
	OLED_Init(&oled,&OLED_InitStructure);
}
