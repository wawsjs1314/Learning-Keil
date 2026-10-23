/**
  ******************************************************************************
  * 简介：适用于pal库oled驱动的字体文件
  *       该文件由bdf2c软件自动生成，工具获取方式 Bilibili关注"铁头山羊"
  * 字体名称：-FreeType-STXingkai-Medium-R-Normal--22-160-100-100-P-164-ISO10646-1
  * 字体字号：16磅
  * 字符数量：5/7819
  * 备注：123
  ******************************************************************************
*/

#ifndef hyjk16_H_
#define hyjk16_H_

#include "oled_font.h"

/* 字形数据 */
static const uint8_t hyjk16_GlyphBitmap_4EE5[] = {0x00,0x70,0x00,0x18,0x00,0x18,0x01,0x18,0x01,0x18,0x02,0x10,0x4E,0x10,0x76,0x10,0xE6,0x1C,0xE6,0x1E,0x40,0x07,0x00,0x1F,0x00,0xF0,}; // 以
static const uint8_t hyjk16_GlyphBitmap_738B[] = {0x07,0x00,0x0F,0x80,0x3F,0x00,0x1F,0x00,0x06,0x00,0x06,0x00,0x3F,0x00,0x7F,0x80,0x7F,0x00,0x3E,0x00,0x1C,0x00,0x3F,0xE0,0xFF,0xF0,0x70,0x30,}; // 王
static const uint8_t hyjk16_GlyphBitmap_8F69[] = {0x0C,0x00,0x1E,0x30,0x1E,0x78,0x7C,0xF8,0x70,0x90,0x2C,0xB0,0x6D,0x70,0x5D,0xFE,0xFF,0xF7,0x4D,0xF0,0x19,0x90,0x78,0x10,0xE8,0x10,0x48,0x10,0x38,0x10,0x08,0x10,0x00,0x10,0x00,0x10,}; // 轩

/* 映射表 */
static const uint32_t hyjk16_Map[] = {20197,29579,36713,};

/* 字形 */
static const Glyph_TypeDef hyjk16_Glyphs[] = {
	// 以
	{
		.Name = "4EE5", 
		.Encoding = 20197, 
		.Swx0 = 990, 
		.Swy0 = 0, 
		.Dwx0 = 22, 
		.Dwy0 = 0, 
		.BBw = 16, 
		.BBh = 13, 
		.BBxoff0x = 3, 
		.BByoff0y = 1, 
		.nBytes = 26, 
		.Bitmap = hyjk16_GlyphBitmap_4EE5, 
	},
	// 王
	{
		.Name = "738B", 
		.Encoding = 29579, 
		.Swx0 = 990, 
		.Swy0 = 0, 
		.Dwx0 = 22, 
		.Dwy0 = 0, 
		.BBw = 12, 
		.BBh = 14, 
		.BBxoff0x = 5, 
		.BByoff0y = 0, 
		.nBytes = 28, 
		.Bitmap = hyjk16_GlyphBitmap_738B, 
	},
	// 轩
	{
		.Name = "8F69", 
		.Encoding = 36713, 
		.Swx0 = 990, 
		.Swy0 = 0, 
		.Dwx0 = 22, 
		.Dwy0 = 0, 
		.BBw = 16, 
		.BBh = 18, 
		.BBxoff0x = 4, 
		.BByoff0y = -3, 
		.nBytes = 36, 
		.Bitmap = hyjk16_GlyphBitmap_8F69, 
	},
};

/* 字体文件 */
const Font_TypeDef hyjk16 =
{
	.SpecVersion = "2.1",
	.FontName = "-FreeType-STXingkai-Medium-R-Normal--22-160-100-100-P-164-ISO10646-1",
	.MetricsSet = 0,
	.FontSize = 16,
	.Xres = 100,
	.Yres = 100,
	.FBBx = 27,
	.FBBy = 25,
	.FBBXoff = -4,
	.FBBYoff = -6,
	.nChars = 5,
	.Map = hyjk16_Map,
	.Glyphs = hyjk16_Glyphs,
};

#endif
