#define monkey_width 64
#define monkey_height 64
static char monkey_bits[] = {
  0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xE0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x18, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0xFF, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xF1, 0xFF, 0x1F, 0x00, 0x07, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 
  0xFF, 0x00, 0x1F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xC7, 0x3F, 0x00, 
  0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x1C, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0xFF, 0xE3, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFD, 
  0xF7, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xE1, 0xF3, 0x7F, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xE0, 0xF7, 0x3F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 
  0xF3, 0x3D, 0x00, 0x00, 0x00, 0xC0, 0x7F, 0xE0, 0xFB, 0x3C, 0x00, 0x00, 
  0x00, 0xF0, 0x3F, 0xC0, 0xF3, 0x78, 0x00, 0x00, 0x00, 0xF8, 0x0F, 0xE0, 
  0xF1, 0x78, 0x00, 0x00, 0x00, 0xFC, 0x03, 0xE0, 0xF1, 0xF0, 0x00, 0x00, 
  0x00, 0x1E, 0x00, 0xE0, 0xE0, 0xE0, 0x01, 0x00, 0x00, 0x3C, 0x00, 0xE0, 
  0xE0, 0xE0, 0x01, 0x00, 0x00, 0x78, 0x00, 0xE0, 0x60, 0x80, 0x01, 0x00, 
  0x00, 0xF0, 0x00, 0xF0, 0xC0, 0x80, 0x0B, 0x00, 0x00, 0xE0, 0x01, 0xE0, 
  0xC7, 0x01, 0x3F, 0x00, 0x00, 0xC0, 0x01, 0x80, 0xFF, 0x0F, 0x3C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xB8, 0x0F, 0x00, 0x00, };
