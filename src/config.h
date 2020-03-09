#define DISPLAY_WIDTH 128
#define DISPLAY_HEIGHT 64

String VERSION = "1.0";

// Display Settings
const int I2C_DISPLAY_ADDRESS = 0x3C; // I2C Address of your Display (usually 0x3c or 0x3d)
const int SDA_PIN = D2;
const int SCL_PIN = D1;

boolean INVERT_DISPLAY = true; // true = pins at top | false = pins at the bottom

