#define chicken_width 64
#define chicken_height 64
static char chicken_bits[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x7F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFC, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0xFF, 0xFF, 0x0F, 0x70, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x7F, 0x04, 
  0xF0, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x3F, 0x00, 0xF0, 0x01, 0x00, 0x00, 
  0xC0, 0xFF, 0x3F, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 
  0xE0, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0xE0, 0x3F, 0x00, 0x00, 
  0xF0, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0xF0, 0xFF, 0x1F, 0x00, 
  0xC0, 0xFF, 0x03, 0x00, 0xFC, 0xFF, 0x1F, 0x00, 0x80, 0xFF, 0x1F, 0x00, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFF, 0xFF, 0xE6, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 
  0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 
  0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x1F, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x80, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 
  0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 
  0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xF8, 0xFF, 0x03, 0x00, 0x00, };
