#ifndef BOARD_H
#define BOARD_H

#define OSC_FREQ 25
#define USBDEVICESTRING "miniF4"
#define USBMFGSTRING "222System Ltd."
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)


#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    513675505, 539130489, // magic
    32, 100,  // used entries, total entries
    4, 0x11, // PIN_BTN_A = PB01
    5, 0x10, // PIN_BTN_B = PB00
    13, 0x2d, // PIN_LED = PC13
    32, 0x5, // PIN_DISPLAY_SCK = PA05
    33, 0x6, // PIN_DISPLAY_MISO = PA06
    34, 0x7, // PIN_DISPLAY_MOSI = PA07
    35, 0x4, // PIN_DISPLAY_CS = PA04
    36, 0x3, // PIN_DISPLAY_DC = PA03
//////////////// For ST7735(160x128)
    // 37, 0xa0, // DISPLAY_WIDTH = 160
    // 38, 0x80, // DISPLAY_HEIGHT = 128
    // 39, 0x020180, // DISPLAY_CFG0 = 0x80 ST7735(160x128 GreenTAB)
    // 40, 0x603, // DISPLAY_CFG1 = 0x603
    // 41, 0x16, // DISPLAY_CFG2 = 0x16
/////////////// For ILI9341(320x240)
    37, 320,    // DISPLAY_WIDTH = 320
    38, 240,    // DISPLAY_HEIGHT = 240
    39, 0xC8,   // DISPLAY_CFG0 = 0x08
    40, 0x0010ff,   // DISPLAY_CFG1 = 0x10ff
    41, 50,         // DISPLAY_CFG2 = 0x50
    78, 9341,   // DISPLAY_TYPE = ILI9341
///////////////////////////////////
    43, 0x2, // PIN_DISPLAY_RST = PA02
    44, 0x1, // PIN_DISPLAY_BL = PA01
    47, 0x16, // PIN_BTN_LEFT = PB06
    48, 0x15, // PIN_BTN_RIGHT = PB05
    49, 0x17, // PIN_BTN_UP = PB07
    50, 0x14, // PIN_BTN_DOWN = PB04
    51, 0x0, // PIN_BTN_MENU = PA00
    60, 0x1d, // PIN_JACK_TX = PB13
    64, 0x1c, // PIN_JACK_PWREN = PB12
    // 65, 0x8, // PIN_JACK_SND = PA08 NG
    // 65,0x1e, // PIN_JACK_SND = PB14 NG
    // 65, 0x1a, // PIN_JACK_SND = PB10  OK
    65, 0x18, // PIN_JACK_SND = PB08  OK
    // 65, 0x1f, // PIN_JACK_SND = PB15 NG
    204, 0x80000, // FLASH_BYTES = 0x80000
    205, 0x20000, // RAM_BYTES = 0x20000
    208, 0x6c4d90aa, // BOOTLOADER_BOARD_ID = 0x59ea3b60
    209, 0x57755a57, // UF2_FAMILY = STM32F401
    210, 0x10, // PINS_PORT_SIZE = PA_16
    212, 0x78, // POWER_DEEPSLEEP_TIMEOUT = 120
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    
    /* CF2 END */
};
#endif

#endif /* BOARD_H */
