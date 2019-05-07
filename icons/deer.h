#define deer_width 64
#define deer_height 64
static char deer_bits[] = {
  0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC3, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xC7, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xB0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x0F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0E, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0xE8, 0x09, 
  0x00, 0xFF, 0x03, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xDB, 0xFF, 0x03, 0x00, 
  0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFE, 0xFF, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x01, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0xF1, 0xFA, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 
  0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0xF0, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0x3F, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x00, 
  0xE0, 0x0F, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0xC0, 0x07, 0x00, 0x00, 
  0x00, 0xE0, 0x0F, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 
  0xC0, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0xC0, 0x07, 0x00, 0x00, 
  0x00, 0xE0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 
  0x80, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x00, 0x80, 0x07, 0x00, 0x00, 
  0x00, 0xE0, 0x01, 0x00, 0x80, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 
  0x80, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x0F, 0x00, 0x00, 
  0x00, 0xE0, 0x01, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 
  0x00, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x1E, 0x00, 0x00, 
  0x00, 0xC0, 0x03, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 
  0x00, 0x3E, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x7C, 0x00, 0x00, 
  0x00, 0x80, 0x07, 0x00, 0x00, 0x78, 0x00, 0x00, };