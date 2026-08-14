#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

// ESP32-C5 SuperMini
// 4MB Flash, no PSRAM

// -----------------------------------------------------------------------------
// USB
// GPIO13 = USB D-
// GPIO14 = USB D+
// These are reserved for native USB.
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
// UART
// -----------------------------------------------------------------------------
static const uint8_t TX = 11;
static const uint8_t RX = 12;

// -----------------------------------------------------------------------------
// I2C
// -----------------------------------------------------------------------------
static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

#define GROVE_SDA 4
#define GROVE_SCL 5

// -----------------------------------------------------------------------------
// SPI
// -----------------------------------------------------------------------------
static const uint8_t SS   = 10;
static const uint8_t MOSI = 3;
static const uint8_t MISO = -1;
static const uint8_t SCK  = 6;

#define SPI_SCK_PIN  6
#define SPI_MOSI_PIN 3
#define SPI_MISO_PIN -1
#define SPI_SS_PIN   10

// -----------------------------------------------------------------------------
// TFT
// -----------------------------------------------------------------------------
#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT 1

#define USER_SETUP_LOADED 1

#define TFT_BACKLIGHT_ON 1
#define TFT_BL 9
#define TFT_RST -1
#define TFT_DC 15
#define TFT_MOSI 3
#define TFT_SCLK 6
#define TFT_CS 10

#define SDCARD_CS -1

#define TOUCH_CS -1

#define SMOOTH_FONT 1

#define SPI_FREQUENCY 20000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

// -----------------------------------------------------------------------------
// Buttons
// -----------------------------------------------------------------------------
#define HAS_3_BUTTONS

#define UP_BTN 0
#define SEL_BTN 1
#define DW_BTN 2

#define BTN_ACT LOW
#define DEEPSLEEP_WAKEUP_PIN SEL_BTN

// -----------------------------------------------------------------------------
// Infrared
// -----------------------------------------------------------------------------
#define RXLED 8
#define TXLED 7

#define LED_ON HIGH
#define LED_OFF LOW

// -----------------------------------------------------------------------------
// CC1101
// -----------------------------------------------------------------------------
#define CC1101_GDO0_PIN 8
#define CC1101_SS_PIN 10
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

// -----------------------------------------------------------------------------
// NRF24
// -----------------------------------------------------------------------------
#define NRF24_CE_PIN 8
#define NRF24_SS_PIN 10
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

// -----------------------------------------------------------------------------
// Ethernet
// -----------------------------------------------------------------------------
#define W5500_INT_PIN 8
#define W5500_SS_PIN 10
#define W5500_MOSI_PIN SPI_MOSI_PIN
#define W5500_SCK_PIN SPI_SCK_PIN
#define W5500_MISO_PIN SPI_MISO_PIN

// -----------------------------------------------------------------------------
// GPIO selection
// -----------------------------------------------------------------------------
#define GPIO_PIN_LIST { \
    {"GPIO 0", 0}, \
    {"GPIO 1", 1}, \
    {"GPIO 2", 2}, \
    {"GPIO 3", 3}, \
    {"GPIO 4", 4}, \
    {"GPIO 5", 5}, \
    {"GPIO 6", 6}, \
    {"GPIO 7", 7}, \
    {"GPIO 8", 8}, \
    {"GPIO 9", 9}, \
    {"GPIO 10", 10}, \
    {"GPIO 15", 15} \
}

#endif /* Pins_Arduino_h */
