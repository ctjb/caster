#define elephant_width 64
#define elephant_height 64
static char elephant_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF0, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xC0, 
  0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xC6, 0xFF, 0x3F, 0xFF, 0x07, 
  0x00, 0x00, 0xF8, 0x8F, 0xFF, 0x3F, 0xFF, 0x0F, 0x00, 0x00, 0xFF, 0xCF, 
  0xFF, 0x3F, 0xFF, 0x1F, 0x00, 0xE0, 0xFF, 0x9F, 0xFF, 0x3F, 0xFF, 0x1F, 
  0x00, 0xF8, 0xFF, 0x9F, 0xFF, 0x3F, 0xFE, 0x3F, 0x00, 0xFC, 0xFF, 0x3F, 
  0xFF, 0x7F, 0xFF, 0x3F, 0x00, 0xFF, 0xFF, 0x3F, 0xFE, 0x7F, 0xFE, 0x3F, 
  0x80, 0xFF, 0xFF, 0x7F, 0xFE, 0x3F, 0xFE, 0x7F, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFC, 0x7F, 0xFF, 0x7F, 0xF0, 0xFF, 0xFF, 0xFF, 0xF1, 0x3F, 0xFE, 0xFF, 
  0xF0, 0xFF, 0xFF, 0xFF, 0xE1, 0x3F, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 
  0xC7, 0x3F, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0x0F, 0x9E, 0xFF, 0xFF, 
  0xFC, 0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xE0, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 
  0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0xFF, 0xE3, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x83, 0x7F, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 
  0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xC0, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x3F, 0x80, 0x7F, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x80, 0x3F, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x80, 0x3F, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x1F, 0xC0, 0x3F, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F, 
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0x1F, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0x07, 0xC0, 0x1F, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x07, 0xC0, 0x0F, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0xE0, 0x0F, 0x00, 0xFE, 0xFF, 0xFB, 
  0xFF, 0x03, 0xC0, 0x0F, 0x00, 0xFE, 0x1F, 0xE0, 0xFF, 0x03, 0xC0, 0x0F, 
  0x00, 0xFE, 0x0F, 0xC0, 0xFF, 0x01, 0xC0, 0x0F, 0x00, 0xFE, 0x0F, 0x80, 
  0xFF, 0x03, 0xC0, 0x0F, 0x00, 0xFE, 0x07, 0x80, 0xFF, 0x03, 0x80, 0x0F, 
  0x00, 0xFE, 0x07, 0x00, 0xFF, 0x01, 0x80, 0x1F, 0x00, 0xFE, 0x0F, 0x80, 
  0xFF, 0x01, 0x00, 0x3F, 0x00, 0xFE, 0x07, 0x80, 0xFF, 0x03, 0x00, 0x3E, 
  0x00, 0xFE, 0x0F, 0x00, 0xFF, 0x03, 0x00, 0x3E, 0x00, 0xFE, 0x07, 0x80, 
  0xFF, 0x01, 0x00, 0x1C, 0x00, 0xFC, 0x07, 0x00, 0xFF, 0x01, 0x00, 0x00, 
  0x00, 0xB0, 0x01, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };
