/*
 * This config file is for Iriver E150
 */

#define MODEL_NAME "Iriver E150"

/* For Rolo and boot loader */
#define MODEL_NUMBER 132

/* define this if you have a flash memory storage */
#define HAVE_FLASH_STORAGE

/* define this if the flash memory uses the SecureDigital Memory Card protocol */
#define CONFIG_STORAGE STORAGE_SD
#define NUM_DRIVES 1
#define SDMMC_NUM_DRIVES NUM_DRIVES
#define HAVE_FAT16SUPPORT
#define STORAGE_NEEDS_ALIGN

/* define this if you have a bitmap LCD display */
#define HAVE_LCD_BITMAP

/* define this if you have a colour LCD */
#define HAVE_LCD_COLOR

/* define this if you want album art for this target */
#define HAVE_ALBUMART

/* define this to enable bitmap scaling */
#define HAVE_BMP_SCALING

/* define this to enable JPEG decoding */
#define HAVE_JPEG

/* define this if you have access to the quickscreen */
#define HAVE_QUICKSCREEN

/* define this if you would like tagcache to build on this target */
#define HAVE_TAGCACHE

/* define this if the target has volume keys which can be used in the lists */
#define HAVE_VOLUME_IN_LIST

/* LCD dimensions */
#define LCD_WIDTH  240
#define LCD_HEIGHT 320
/* sqrt(240^2 + 320^2) / 2.2 = 181.8 */
#define LCD_DPI 182
#define LCD_DEPTH  16   /* 65k colours */
#define LCD_PIXELFORMAT RGB565 /* rgb565 */

#ifndef BOOTLOADER
/* Define this if your LCD can be enabled/disabled */
//#define HAVE_LCD_ENABLE

/* Define this if your LCD can be put to sleep. HAVE_LCD_ENABLE
   should be defined as well. */
//#define HAVE_LCD_SLEEP
/* We don't use a setting but a fixed delay after the backlight has
 * turned off */
//#define LCD_SLEEP_TIMEOUT (5*HZ)

#endif /* BOOTLOADER */

#define CONFIG_KEYPAD IRIVER_E150_PAD

/* Define this to enable morse code input */
#define HAVE_MORSE_INPUT

/* Define this if you do software codec */
#define CONFIG_CODEC SWCODEC

/* define this if you have a real-time clock */
//#define CONFIG_RTC RTC_S3C2440

/* Define this for LCD backlight available */
#define HAVE_BACKLIGHT
#define HAVE_BACKLIGHT_BRIGHTNESS

/* Main LCD backlight brightness range and defaults */
#define MIN_BRIGHTNESS_SETTING          1
#define MAX_BRIGHTNESS_SETTING          7
#define DEFAULT_BRIGHTNESS_SETTING      6

/* Define this if you have a software controlled poweroff */
#define HAVE_SW_POWEROFF

/* The number of bytes reserved for loadable codecs */
#define CODEC_SIZE 0x100000

/* The number of bytes reserved for loadable plugins */
#define PLUGIN_BUFFER_SIZE 0x80000

#define AB_REPEAT_ENABLE

/* Define this if you have the ATJ213X built-in audio codec */
#define HAVE_ATJ213X_CODEC

#define HW_SAMPR_CAPS (SAMPR_CAP_96 | SAMPR_CAP_48 | SAMPR_CAP_44 | \
                       SAMPR_CAP_32 | SAMPR_CAP_24 | SAMPR_CAP_22 | \
                       SAMPR_CAP_16 | SAMPR_CAP_12 | SAMPR_CAP_11 | \
                       SAMPR_CAP_8)

#define HAVE_HEADPHONE_DETECTION

// Don't know
#define BATTERY_CAPACITY_DEFAULT 830 /* default battery capacity */
#define BATTERY_CAPACITY_MIN 830        /* min. capacity selectable */
#define BATTERY_CAPACITY_MAX 830        /* max. capacity selectable */
#define BATTERY_CAPACITY_INC 25         /* capacity increment */
#define BATTERY_TYPES_COUNT  1          /* only one type */

#define CONFIG_BATTERY_MEASURE VOLTAGE_MEASURE

/* Charging implemented in a target-specific algorithm */
#define CONFIG_CHARGING CHARGING_TARGET

/* define current usage levels */
#define CURRENT_NORMAL     46 /* 18 hours from an 830 mah battery*/  
#define CURRENT_BACKLIGHT  30 /* seems reasonable */ 
#define CURRENT_RECORD     0  /* no recording on the gigabeat F/X */ 

/* define this if the unit can be powered or charged via USB */
#define HAVE_USB_POWER

/* usb core type */
#define CONFIG_USBOTG USBOTG_ATJ213X

#define HAVE_USBSTACK

/* OF Iriver E150 in MSC mode */
#define USB_VENDOR_ID 0x4102
#define USB_PRODUCT_ID 0x1052
//#define HAVE_BOOTLOADER_USB_MODE

/* Define this if you have a Actions ATJ213X SoC */
#define CONFIG_CPU ATJ213X

/* Define this if you want to use ATJ213X i2c interface */
#define CONFIG_I2C I2C_ATJ213X

/* Define this to the CPU frequency 
 * for now it runs @ 36MHz */
#define CPU_FREQ 36000000

#define CONFIG_LCD LCD_HX8347D

#define CONFIG_LED LED_VIRTUAL

/* Define this if you have adjustable CPU frequency */
/* #define HAVE_ADJUSTABLE_CPU_FREQ */

#define BOOTFILE_EXT "e150"
#define BOOTFILE "rockbox." BOOTFILE_EXT
#define BOOTDIR "/.rockbox"

/* Offset ( in the firmware file's header ) to the file CRC and data. These are
   only used when loading the old format rockbox.e200 file */
#define FIRMWARE_OFFSET_FILE_CRC    0x0
#define FIRMWARE_OFFSET_FILE_DATA   0x8

