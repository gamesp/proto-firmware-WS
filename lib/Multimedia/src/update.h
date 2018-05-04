#define update_width 64
#define update_height 64
const char update_bits[] PROGMEM = {
   0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0xff,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0xfe, 0xff, 0xff, 0x71, 0x30, 0x00,
   0x00, 0x0c, 0xfe, 0xff, 0xff, 0x79, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x78, 0x30, 0x00,
   0x00, 0x0c, 0xfc, 0x3f, 0x00, 0xfe, 0x30, 0x00, 0x00, 0x0c, 0xfe, 0x7f,
   0x80, 0xef, 0x30, 0x00, 0x00, 0x0c, 0xfc, 0x7f, 0xc0, 0xe7, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0xf0, 0xe1, 0x38, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x70, 0xe0, 0xff, 0x01, 0x00, 0x0c, 0x00, 0x00, 0x70, 0xe0, 0xff, 0x07,
   0x00, 0x0c, 0x00, 0x00, 0xf0, 0xe0, 0xb8, 0x0f, 0x00, 0x0c, 0xfc, 0x7f,
   0xe0, 0xe3, 0x30, 0x1e, 0x00, 0x0c, 0xfe, 0x7f, 0x80, 0xef, 0x30, 0x1c,
   0x00, 0x0c, 0xfc, 0x7f, 0x00, 0xff, 0x30, 0x38, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x7c, 0x30, 0x38, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x30, 0x30, 0x38,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x38, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x38, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x1c,
   0x00, 0x0c, 0xfc, 0xff, 0x1f, 0x00, 0x30, 0x1e, 0x00, 0x0c, 0xfe, 0xff,
   0x1f, 0x00, 0xf0, 0x0f, 0xc0, 0x0f, 0xfc, 0xff, 0x0f, 0x00, 0xf0, 0x07,
   0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0xf0, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x38, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x18, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x1c, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x1c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x1c, 0x0c, 0x00, 0xe0, 0x01, 0x00, 0x30, 0x00, 0x1c, 0x0c, 0x00, 0xf0,
   0x07, 0x00, 0x30, 0x00, 0x18, 0x0c, 0x00, 0xf0, 0x0f, 0x00, 0x30, 0x00,
   0x38, 0x0c, 0x00, 0x70, 0x3e, 0x00, 0x30, 0x00, 0x70, 0x0c, 0x00, 0x70,
   0x78, 0x00, 0x30, 0x00, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0x00, 0x30, 0x00,
   0xc0, 0xff, 0xff, 0x7f, 0xe0, 0x00, 0x30, 0x00, 0x00, 0xfe, 0xff, 0x7f,
   0xf0, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x70, 0x7c, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x70, 0x1f, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0xf0,
   0x0f, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0xe0, 0x03, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0xc0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00,
   0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
   0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0xfc, 0xff, 0xff,
   0xff, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00,
   0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x00 };
