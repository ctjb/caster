#define ant_width 64
#define ant_height 64
static char ant_bits[] = {
  0x00, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x1C, 0x18, 0x00, 0x0C, 0x00, 
  0x00, 0x60, 0x00, 0x3C, 0x3C, 0x00, 0x06, 0x00, 0x00, 0xC0, 0x00, 0xFC, 
  0x3F, 0x00, 0x03, 0x00, 0x00, 0x80, 0x01, 0xFC, 0x3F, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x01, 0xFC, 0x3F, 0x80, 0x01, 0x00, 0x00, 0x00, 0x03, 0xFE, 
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x7F, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x06, 0xFF, 
  0xFF, 0x61, 0x00, 0x00, 0x00, 0x00, 0x86, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0xFF, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x00, 0x06, 0xFF, 
  0xFF, 0x60, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x7F, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x0E, 0xFC, 0x3F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x3E, 0xF8, 
  0x1F, 0x7C, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFD, 0xBF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
  0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x40, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xBE, 0xFD, 0x7F, 0x7F, 0x00, 0x00, 
  0x00, 0x80, 0x0F, 0xF8, 0x1F, 0xF0, 0x01, 0x00, 0x00, 0xC0, 0x01, 0xF8, 
  0x1F, 0x80, 0x03, 0x00, 0x00, 0xF0, 0x00, 0xF0, 0x0F, 0x00, 0x0F, 0x00, 
  0x00, 0x38, 0x00, 0xF0, 0x0F, 0x00, 0x1E, 0x00, 0x00, 0x18, 0x00, 0xF0, 
  0x0F, 0x00, 0x18, 0x00, 0x00, 0x0C, 0x00, 0xFC, 0x3F, 0x00, 0x30, 0x00, 
  0x00, 0x0E, 0x00, 0xFF, 0xFF, 0x00, 0x70, 0x00, 0x00, 0x06, 0x80, 0xFF, 
  0xFF, 0x01, 0x60, 0x00, 0x00, 0x03, 0xC0, 0xFF, 0xFF, 0x03, 0xC0, 0x00, 
  0x00, 0x00, 0xE0, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 
  0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 
  0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 
  0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xF0, 0xE3, 0xFF, 
  0xFF, 0xC7, 0x0F, 0x00, 0x00, 0x78, 0xE0, 0xFF, 0xFF, 0x07, 0x0E, 0x00, 
  0x00, 0x30, 0xE0, 0xFF, 0xFF, 0x07, 0x0C, 0x00, 0x00, 0x38, 0xC0, 0xFF, 
  0xFF, 0x03, 0x1C, 0x00, 0x00, 0x18, 0xC0, 0xFF, 0xFF, 0x03, 0x18, 0x00, 
  0x00, 0x18, 0x80, 0xFF, 0xFF, 0x01, 0x18, 0x00, 0x00, 0x18, 0x80, 0xFF, 
  0xFF, 0x01, 0x18, 0x00, 0x00, 0x18, 0x00, 0xFF, 0xFF, 0x00, 0x18, 0x00, 
  0x00, 0x1C, 0x00, 0xFE, 0x7F, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0xFE, 
  0x7F, 0x00, 0x18, 0x00, 0x00, 0x1C, 0x00, 0xFC, 0x3F, 0x00, 0x38, 0x00, 
  0x00, 0x0C, 0x00, 0xF8, 0x1F, 0x00, 0x30, 0x00, 0x00, 0x1C, 0x00, 0xF8, 
  0x1F, 0x00, 0x38, 0x00, 0x00, 0x18, 0x00, 0xF0, 0x0F, 0x00, 0x18, 0x00, 
  0x00, 0x18, 0x00, 0xE0, 0x07, 0x00, 0x18, 0x00, 0x00, 0x10, 0x00, 0xC0, 
  0x03, 0x00, 0x08, 0x00, 0x00, 0x30, 0x00, 0x80, 0x01, 0x00, 0x0C, 0x00, 
  0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x20, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
  0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, };
