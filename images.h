@@ -0,0 +1,475 @@
#define IMAGES_WIDTH 128
#define IMAGES_HEIGHT 64


const uint8_t connecting_bar_1_2_3_off[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t connecting_bar_2_3_off[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1f,0xf8,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0xc0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0x0,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t connecting_bar_3_off[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0x3,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0xff,0x3,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xff,0x0,0x0,0xfe,0xff,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0x3f,0x0,0x0,0xf8,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0xf,0x0,0x0,0xe0,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x7,0x0,0x0,0xc0,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x1,0x0,0x0,0x0,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0x7f,0x0,0xe0,0xf,0x0,0xfe,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0x3f,0x80,0xff,0xff,0x1,0xf8,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x1f,0xc0,0xff,0xff,0x7,0xf0,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1f,0xf8,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0xc0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0x0,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};



const uint8_t connecting_full[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xf,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0x3f,0xfc,0xff,0xff,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x0,0x0,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0xff,0x1f,0x0,0x0,0xf0,0xff,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0xff,0x7,0x0,0x0,0xc0,0xff,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xff,0xff,0x0,0x0,0x0,0x0,0xff,0xff,0x1,0x0,0x0,0x0,
  0x0,0x0,0x0,0x80,0xff,0x1f,0x0,0x0,0x0,0x0,0xf0,0xff,0x3,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xff,0x7,0x0,0x0,0x0,0x0,0xe0,0xff,0x7,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xff,0x3,0x0,0xfe,0x7f,0x0,0x80,0xff,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0xff,0x1,0xc0,0xff,0xff,0x3,0x80,0xff,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0xff,0x0,0xf8,0xff,0xff,0x1f,0x0,0xfe,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0x7f,0x0,0xfc,0xff,0xff,0x7f,0x0,0xfc,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0x1f,0xc0,0xff,0xff,0xff,0xff,0x3,0xf0,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xf,0xe0,0xff,0xff,0xff,0xff,0x7,0xf0,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xc0,0x7,0xf0,0xff,0xff,0xff,0xff,0x1f,0xe0,0x7,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xff,0x0,0x0,0xfe,0xff,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0x3f,0x0,0x0,0xf8,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0xf,0x0,0x0,0xe0,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x7,0x0,0x0,0xc0,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x1,0x0,0x0,0x0,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0x7f,0x0,0xe0,0xf,0x0,0xfe,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0x3f,0x80,0xff,0xff,0x1,0xf8,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x1f,0xc0,0xff,0xff,0x7,0xf0,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1f,0xf8,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0xc0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0x0,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};


const uint8_t wifi_ok[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xf,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0x3f,0xfc,0xff,0xff,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0xff,0xff,0x0,0x0,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0xff,0x1f,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0xff,0x7,0x0,0x0,0x0,0xc0,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xff,0xff,0x0,0x0,0x0,0x0,0x80,0xff,0x1,0x0,0x0,0x0,
  0x0,0x0,0x0,0x80,0xff,0x1f,0x0,0x0,0x0,0xc0,0x87,0xff,0x3,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xff,0x7,0x0,0x0,0x0,0xe0,0x8f,0xff,0x7,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xff,0x3,0x0,0xfe,0x7f,0xf0,0x8f,0xff,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0xff,0x1,0xc0,0xff,0x7f,0xf8,0xf,0xff,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0xff,0x0,0x0,0xfe,0x3f,0xfc,0xf,0xfe,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0xfc,0x3f,0xfe,0xf,0xfc,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0xf8,0xf,0xff,0x7,0xf0,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xe0,0xf,0x20,0xf8,0xf0,0x87,0xff,0x3,0xf0,0xf,0x0,0x0,0x0,
  0x0,0x0,0x0,0xc0,0x7,0x30,0xfc,0xc1,0xc1,0xff,0x1,0xe0,0x7,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x38,0xfc,0x87,0xe0,0xff,0x20,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x3e,0xfc,0xf,0xf0,0x7f,0x70,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x3f,0xfc,0x1f,0xf8,0x3f,0xf8,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0x3f,0xfc,0x3f,0xfc,0x1f,0xfc,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0x3f,0xf8,0xff,0xfe,0xf,0xfe,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0x7f,0xf0,0xff,0xff,0x7,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0xe0,0xff,0xff,0x3,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0x7f,0x80,0xff,0xff,0x1,0xfe,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0x3f,0x0,0xff,0xff,0x0,0xf8,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x1f,0x0,0xfe,0x7f,0x0,0xf0,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x10,0xfc,0x3f,0x1c,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xf0,0x1f,0x1e,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xe0,0xf,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xc3,0x87,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0xc1,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xf,0xe0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x7,0xc0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x3c,0x0,0x0,0x7c,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t uploading_image[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0x7,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xf,0x0,0xfc,0xf,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x3,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xe0,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0xc0,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x7f,0x0,0x0,0x80,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x3f,0x0,0x0,0x0,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x3f,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0x1f,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0x1f,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfc,0xf,0x0,0x0,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xf,0x0,0x0,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0xf,0x0,0x7,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x7,0x80,0xf,0x0,0xf8,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xe0,0xff,0x3,0xc0,0x1f,0x0,0xf8,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0xc0,0x3f,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0xf,0x0,0xe0,0x3f,0x0,0xfc,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x7,0x0,0xf0,0x7f,0x0,0xfc,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x3,0x0,0xf8,0xff,0x0,0xfc,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x1,0x0,0xfc,0xff,0x1,0xf8,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0xff,0x3,0xf0,0x3f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0xff,0x7,0xc0,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xff,0xff,0x7,0x80,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x80,0xff,0xff,0xf,0x0,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0xc0,0xff,0xff,0x1f,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0xe0,0xff,0xff,0x3f,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0xf0,0xff,0xff,0x7f,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0xf0,0xff,0xff,0x7f,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0xf8,0xff,0xff,0xff,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0xf8,0xff,0xff,0xff,0x0,0xf8,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0xf0,0xff,0xff,0x7f,0x0,0xf8,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xfe,0xff,0x3,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7e,0x0,0x0,0xfe,0xff,0x3,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xfe,0xff,0x3,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x1,0x0,0xfe,0xff,0x3,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x1,0x0,0xfe,0xff,0x3,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x3,0x0,0xfe,0xff,0x3,0x0,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0x7,0x0,0xfe,0xff,0x3,0x80,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0xfe,0xff,0x3,0xc0,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0xfe,0xff,0x3,0xf0,0x3f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xe0,0xff,0x3f,0xfe,0xff,0xe3,0xff,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x3f,0xfe,0xff,0xe3,0xff,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0x3f,0xfe,0xff,0xe3,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0x3f,0xfe,0xff,0xe3,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfc,0x3f,0xfe,0xff,0xe3,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xe0,0x3f,0xfc,0xff,0xe1,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};

const uint8_t upload_fail[] PROGMEM = {
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0xff,0x7,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0x1f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x80,0xff,0xff,0x7f,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xff,0x1,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf0,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xf8,0x3f,0x0,0xff,0x7,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xf,0x0,0xfc,0xf,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xfe,0x3,0x0,0xf0,0x1f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x1,0x0,0xe0,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0xc0,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x7f,0x0,0x0,0x80,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x3f,0x0,0x0,0x0,0x7f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x80,0x3f,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0x1f,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xc0,0x1f,0x0,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xf0,0xf,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfc,0xf,0x0,0x0,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xff,0xf,0x0,0x0,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0xf,0x0,0x0,0x0,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0x7,0x1f,0x0,0x1f,0xf8,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xe0,0xff,0x3,0x3f,0x80,0x1f,0xf8,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x7f,0xc0,0x1f,0xfc,0x1,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0xf,0x0,0xff,0xe0,0x1f,0xfc,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x7,0x0,0xff,0xf1,0x1f,0xfc,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x3,0x0,0xfe,0xfb,0xf,0xfc,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x1,0x0,0xfc,0xff,0x7,0xf8,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xf8,0xff,0x3,0xf0,0x3f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0xf0,0xff,0x1,0xc0,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xe0,0xff,0x0,0x80,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xc0,0x7f,0x0,0x0,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0x80,0x3f,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0xc0,0x7f,0x0,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0xe0,0xff,0x0,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0xf0,0xff,0x1,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0xf8,0xff,0x3,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0xfc,0xff,0x7,0x0,0xf8,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xfe,0xfb,0xf,0x0,0xf8,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7f,0x0,0x0,0xff,0xf1,0x1f,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x7e,0x0,0x0,0xff,0xe0,0x1f,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x0,0x0,0x7f,0xc0,0x1f,0x0,0xfc,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfe,0x1,0x0,0x3f,0x80,0x1f,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x1,0x0,0x1f,0x0,0x1f,0x0,0xfe,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xfc,0x3,0x0,0x0,0x0,0x0,0x0,0xff,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0x7,0x0,0x0,0x0,0x0,0x80,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf8,0x1f,0x0,0x0,0x0,0x0,0xc0,0x7f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xf0,0x7f,0x0,0x0,0x0,0x0,0xf0,0x3f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xff,0xff,0xff,0xff,0x1f,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0xc0,0xff,0xff,0xff,0xff,0xff,0xff,0xf,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x80,0xff,0xff,0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfe,0xff,0xff,0xff,0xff,0xff,0x3,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xfc,0xff,0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0xe0,0xff,0xff,0xff,0xff,0x3f,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};
