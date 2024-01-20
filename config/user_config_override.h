/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

/*****************************************************************************************************\
 * USAGE:
 *   To modify the stock configuration without changing the my_user_config.h file:
 *   (1) copy this file to "user_config_override.h" (It will be ignored by Git)
 *   (2) define your own settings below
 *
 ******************************************************************************************************
 * ATTENTION:
 *   - Changes to SECTION1 PARAMETER defines will only override flash settings if you change define CFG_HOLDER.
 *   - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *   - You still need to update my_user_config.h for major define USE_MQTT_TLS.
 *   - All parameters can be persistent changed online using commands via MQTT, WebConsole or Serial.
\*****************************************************************************************************/

#ifdef CLEAR_BUILD
#ifdef ESP32
// All unnecessary stuff. Clean

#undef USE_AC_ZERO_CROSS_DIMMER
#undef USE_DOMOTICZ
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO

#undef ROTARY_V1        // Add support for Rotary Encoder as used in MI Desk Lamp (+0k8 code)
#undef ROTARY_MAX_STEPS // Rotary step boundary
#undef USE_SONOFF_RF    // Add support for Sonoff Rf Bridge (+3k2 code)
#undef USE_RF_FLASH     // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+2k7 code)
#undef USE_SONOFF_SC    // Add support for Sonoff Sc (+1k1 code)
#undef USE_TUYA_MCU     // Add support for Tuya Serial MCU
#undef TUYA_DIMMER_ID   // Default dimmer Id
#undef USE_TUYA_TIME    // Add support for Set Time in Tuya MCU
// #undef USE_TUYAMCUBR                            // Add support for TuyaMCU Bridge
#undef USE_ARMTRONIX_DIMMERS // Add support for Armtronix Dimmers (+1k4 code)
#undef USE_PS_16_DZ          // Add support for PS-16-DZ Dimmer (+2k code)
#undef USE_SONOFF_IFAN       // Add support for Sonoff iFan02 and iFan03 (+2k code)
#undef USE_BUZZER            // Add support for a buzzer (+0k6 code)
#undef USE_ARILUX_RF         // Add support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#undef USE_SHUTTER           // Add Shutter support for up to 4 shutter with different motortypes (+11k code)
#undef USE_DEEPSLEEP         // Add support for deepsleep (+1k code)
#undef USE_EXS_DIMMER        // Add support for ES-Store Wi-Fi Dimmer (+1k5 code)
//  #undef EXS_MCU_CMNDS                          // Add command to send MCU commands (+0k8 code)
// #undef USE_HOTPLUG                              // Add support for sensor HotPlug
#undef USE_DEVICE_GROUPS      // Add support for device groups (+5k5 code)
#undef DEVICE_GROUPS_ADDRESS  // Device groups multicast address
#undef DEVICE_GROUPS_PORT     // Device groups multicast port
#undef USE_DEVICE_GROUPS_SEND // Add support for the DevGroupSend command (+0k6 code)
#undef USE_PWM_DIMMER         // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+2k3 code, DGR=0k7)
#undef USE_PWM_DIMMER_REMOTE  // Add support for remote switches to PWM Dimmer (requires USE_DEVICE_GROUPS) (+0k6 code)
// #undef USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
#undef USE_SONOFF_D1     // Add support for Sonoff D1 Dimmer (+0k7 code)
#undef USE_SHELLY_DIMMER // Add support for Shelly Dimmer (+3k code)
#undef SHELLY_CMDS       // Add command to send co-processor commands (+0k3 code)
#undef SHELLY_FW_UPGRADE // Add firmware upgrade option for co-processor (+3k4 code)

// -- Optional light modules ----------------------
#undef USE_LIGHT  // Add support for light control
#undef USE_WS2812 // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //

#undef USE_MY92X1             // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
#undef USE_SM16716            // Add support for SM16716 RGB LED controller (+0k7 code)
#undef USE_SM2135             // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#undef USE_SM2335             // Add support for SM2335 RGBCW led control as used in SwitchBot Color Bulb (+0k7 code)
#undef USE_BP1658CJ           // Add support for BP1658CJ RGBCW led control as used in Orein OS0100411267 Bulb
#undef USE_BP5758D            // Add support for BP5758D RGBCW led control as used in some Tuya lightbulbs (+0k8 code)
#undef USE_SONOFF_L1          // Add support for Sonoff L1 led control
#undef USE_ELECTRIQ_MOODL     // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller (+0k3 code)
#undef USE_LIGHT_PALETTE      // Add support for color palette (+0k7 code)
#undef USE_LIGHT_VIRTUAL_CT   // Add support for Virtual White Color Temperature (+1.1k code)
#undef USE_DGR_LIGHT_SEQUENCE // Add support for device group light sequencing (requires USE_DEVICE_GROUPS) (+0k2 code)
                              // #undef USE_LSC_MCSL                             // Add support for GPE Multi color smart light as sold by Action in the Netherlands (+1k1 code)

// #undef USE_LIGHT_ARTNET                         // Add support for DMX/ArtNet via UDP on port 6454 (+3.5k code)
#undef USE_LIGHT_ARTNET_MCAST // Multicast address used to listen: 239.255.25.54

#undef USE_DISPLAY_MODES1TO5 // Enable display mode 1 to 5 in addition to mode 0
#undef USE_DISPLAY_LCD       // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
#undef USE_DISPLAY_SSD1306   // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
#undef USE_DISPLAY_MATRIX    // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
#undef MTX_ADDRESS1          // [DisplayAddress1] I2C address of first 8x8 matrix module
#undef MTX_ADDRESS2          // [DisplayAddress2] I2C address of second 8x8 matrix module
#undef MTX_ADDRESS3          // [DisplayAddress3] I2C address of third 8x8 matrix module
#undef MTX_ADDRESS4          // [DisplayAddress4] I2C address of fourth 8x8 matrix module
#undef MTX_ADDRESS5          // [DisplayAddress5] I2C address of fifth 8x8 matrix module
#undef MTX_ADDRESS6          // [DisplayAddress6] I2C address of sixth 8x8 matrix module
#undef MTX_ADDRESS7          // [DisplayAddress7] I2C address of seventh 8x8 matrix module
#undef MTX_ADDRESS8          // [DisplayAddress8] I2C address of eigth 8x8 matrix module
#undef USE_DISPLAY_SEVENSEG

#undef USE_DHT

#undef USE_IR_REMOTE
#undef USE_IR_SEND_NEC // Support IRsend NEC protocol
#undef USE_IR_SEND_RC5 // Support IRsend Philips RC5 protocol
#undef USE_IR_SEND_RC6 // Support IRsend Philips RC6 protocol

// Enable IR devoder via GPIO `IR Recv` - always enabled if `USE_IR_REMOTE_FULL`
#undef USE_IR_RECEIVE

#undef USE_ZIGBEE_ZNP

#undef USE_ADC

#undef USE_NETWORK_LIGHT_SCHEMES

#undef USE_AUTOCONF // Enable Esp32 autoconf feature, requires USE_BERRY and USE_WEBCLIENT_HTTPS (12KB Flash)

#undef USE_BERRY                                     // Enable Berry scripting language
#undef USE_BERRY_PYTHON_COMPAT                       // Enable by default `import python_compat`
#undef USE_BERRY_PSRAM                               // Allocate Berry memory in PSRAM if PSRAM is connected - this might be slightly slower but leaves main memory intact
#undef USE_BERRY_IRAM                                // Allocate some data structures in IRAM (which is ususally unused) when possible and if no PSRAM is available
#undef USE_WEBCLIENT                                 // Enable `webclient` to make HTTP/HTTPS requests. Can be disabled for security reasons.
#undef USE_BERRY_WEBCLIENT_USERAGENT "TasmotaClient" // default user-agent used, can be changed with `wc.set_useragent()`
#undef USE_BERRY_WEBCLIENT_TIMEOUT 2000              // Default timeout in milliseconds
#undef USE_BERRY_PARTITION_WIZARD_URL "http://ota.tasmota.com/tapp/partition_wizard.bec"
#undef USE_BERRY_GPIOVIEWER_URL "http://ota.tasmota.com/tapp/gpioviewer.bec"
#undef USE_BERRY_TCPSERVER          // Enable TCP socket server (+0.6k)
#undef USE_BERRY_CRYPTO_AES_GCM     // enable AES GCM 256 bits
#undef USE_BERRY_CRYPTO_SHA256      // enable SHA256 hash function
#undef USE_BERRY_CRYPTO_HMAC_SHA256 // enable HMAC SHA256 hash function

#undef USE_CSE7761 // Add support for CSE7761 Energy monitor as used in Sonoff Dual R3

// -- LVGL Graphics Library ---------------------------------
// #undef USE_LVGL                                 // LVGL Engine, requires Berry (+382KB)
#undef USE_LVGL_PSRAM // Allocate LVGL memory in PSRAM if PSRAM is connected - this might be slightly slower but leaves main memory intact
// #undef USE_LVGL_HASPMOTA                      // Enable OpenHASP compatiblity and Robotocondensed fonts (+90KB flash)
#undef USE_LVGL_MAX_SLEEP 10 // max sleep in ms when LVGL is enabled, more than 10ms will make display less responsive
#undef USE_LVGL_PNG_DECODER  // include a PNG image decoder from file system (+16KB)
                             // #undef USE_LVGL_TOUCHSCREEN                   // Use virtual touch screen with Berry driver
// #undef USE_LVGL_FREETYPE                      // Use the FreeType renderer to display fonts using native TTF files in file system (+77KB flash)
#undef LV_USE_FT_CACHE_MANAGER 1                   // define whether glyphs are cached by FreeType library
#undef USE_LVGL_FREETYPE_MAX_FACES 64              // max number of FreeType faces in cache
#undef USE_LVGL_FREETYPE_MAX_SIZES 4               // max number of sizes in cache
#undef USE_LVGL_FREETYPE_MAX_BYTES 16 * 1024       // max bytes in cache
#undef USE_LVGL_FREETYPE_MAX_BYTES_PSRAM 64 * 1024 // max bytes in cache when using PSRAM
#undef USE_LVGL_BG_DEFAULT 0x000000                // Default color for the uninitialized background screen (black)

#undef BE_LV_WIDGET_ARC
#undef BE_LV_WIDGET_BAR
#undef BE_LV_WIDGET_BTN
#undef BE_LV_WIDGET_BTNMATRIX
#undef BE_LV_WIDGET_CANVAS
#undef BE_LV_WIDGET_CHECKBOX
#undef BE_LV_WIDGET_DROPDOWN
#undef BE_LV_WIDGET_IMG
#undef BE_LV_WIDGET_LABEL
#undef BE_LV_WIDGET_LINE
#undef BE_LV_WIDGET_ROLLER
#undef BE_LV_WIDGET_SLIDER
#undef BE_LV_WIDGET_SWITCH
#undef BE_LV_WIDGET_TABLE
#undef BE_LV_WIDGET_TEXTAREA

#undef BE_LV_WIDGET_CHART
#undef BE_LV_WIDGET_COLORWHEEL
#undef BE_LV_WIDGET_IMGBTN
#undef BE_LV_WIDGET_LED
#undef BE_LV_WIDGET_METER
#undef BE_LV_WIDGET_MSGBOX
#undef BE_LV_WIDGET_SPINBOX
#undef BE_LV_WIDGET_SPINNER

#undef BE_LV_WIDGET_QRCODE

#endif
#endif
/*
Examples :

// -- Master parameter control --------------------
#undef  CFG_HOLDER
#define CFG_HOLDER        4617                   // [Reset 1] Change this value to load SECTION1 configuration parameters to flash

// -- Setup your own Wifi settings  ---------------
#undef  STA_SSID1
#define STA_SSID1         "YourSSID"             // [Ssid1] Wifi SSID

#undef  STA_PASS1
#define STA_PASS1         "YourWifiPassword"     // [Password1] Wifi password

// -- Setup your own MQTT settings  ---------------
#undef  MQTT_HOST
#define MQTT_HOST         "your-mqtt-server.com" // [MqttHost]

#undef  MQTT_PORT
#define MQTT_PORT         1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)

#undef  MQTT_USER
#define MQTT_USER         "YourMqttUser"         // [MqttUser] Optional user

#undef  MQTT_PASS
#define MQTT_PASS         "YourMqttPass"         // [MqttPassword] Optional password

// You might even pass some parameters from the command line ----------------------------
// Ie:  export PLATFORMIO_BUILD_FLAGS='-DUSE_CONFIG_OVERRIDE -DMY_IP="192.168.1.99" -DMY_GW="192.168.1.1" -DMY_DNS="192.168.1.1"'

#ifdef MY_IP
#undef  WIFI_IP_ADDRESS
#define WIFI_IP_ADDRESS     MY_IP                // Set to 0.0.0.0 for using DHCP or enter a static IP address
#endif

#ifdef MY_GW
#undef  WIFI_GATEWAY
#define WIFI_GATEWAY        MY_GW                // if not using DHCP set Gateway IP address
#endif

#ifdef MY_DNS
#undef  WIFI_DNS
#define WIFI_DNS            MY_DNS               // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

#ifdef MY_DNS2
#undef  WIFI_DNS2
#define WIFI_DNS2           MY_DNS2              // If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)
#endif

// !!! Remember that your changes GOES AT THE BOTTOM OF THIS FILE right before the last #endif !!!
*/

#define FRIENDLY_NAME "Uni GW"
#define PROJECT "Uni_GW"

#define MODULE USER_MODULE
#define FALLBACK_MODULE USER_MODULE

#ifdef ESP8266
#define USER_TEMPLATE "{\"NAME\":\"Generic GW\",\"GPIO\":[1,1,1,1,1,1,1,1,1,1,1,1,1,1],\"FLAG\":0,\"BASE\":18}" // [Template] Set JSON template
#endif                                                                                                          // ESP8266

#ifdef ESP32

#ifdef UGW_MB_ETH01
#define USER_TEMPLATE "{\"NAME\":\"Mind board WT32-ETH01\",\"GPIO\":[0,5312,0,5344,0,5472,0,0,0,0,608,640,3840,5504,5600,0,0,0,0,5568,0,0,0,0,0,0,0,0,1312,0,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":1}"
#define OTA_URL "https://github.com/xyzroe/UniGW/releases/latest/download/UniGW-MindBrd_WT32-ETH01.bin"
#define USE_ETHERNET  // Add support for ethernet (+20k code)
#define ETH_TYPE 0    // [EthType] 0 = ETH_PHY_LAN8720, 1 = ETH_PHY_TLK110/ETH_PHY_IP101, 2 = ETH_PHY_RTL8201, 3 = ETH_PHY_DP83848, 4 = ETH_PHY_DM9051, 5 = ETH_PHY_KSZ8081
#define ETH_ADDRESS 1 // [EthAddress] 0 = PHY0 .. 31 = PHY31
#define ETH_CLKMODE 0 // [EthClockMode] 0 = ETH_CLOCK_GPIO0_IN, 1 = ETH_CLOCK_GPIO0_OUT, 2 = ETH_CLOCK_GPIO16_OUT, 3 = ETH_CLOCK_GPIO17_OUT
#endif // UGW_MB_ETH01

#ifdef UGW_MB_WMS32
#define USER_TEMPLATE "{\"NAME\":\"Mind board Wemos32\",\"GPIO\":[0,0,0,0,0,0,0,0,0,0,608,640,5312,0,5344,0,0,5472,5504,0,0,0,0,0,0,0,0,0,1312,0,0,0,0,0,0,0],\"FLAG\":0,\"BASE\":1}"
#define OTA_URL "https://github.com/xyzroe/UniGW/releases/latest/download/UniGW-MindBrd_Wemos32.bin"
#endif // UGW_MB_WMS32

#ifdef UGW_T - INET
#define USER_TEMPLATE "{\"NAME\":\"T-Internet-COM\",\"GPIO\":[0,0,1,0,5536,0,0,0,1376,1,1,1,0,0,5600,0,0,0,0,5568,0,0,0,0,0,0,0,0,0,9408,0,9440,0,0,0,0],\"FLAG\":0,\"BASE\":1}"
#define OTA_URL "https://github.com/xyzroe/UniGW/releases/latest/download/UniGW_T-Internet-COM.bin"
#define USE_ETHERNET
#define ETH_CLKMODE 1
#define ETH_TYPE 0
#define ETH_ADDRESS 0

#endif // UGW_T-INET

// #define USE_HOME_ASSISTANT                                   // Enable Home Assistant Discovery Support (+12k code, +6 bytes mem)
//   #define HOME_ASSISTANT_DISCOVERY_PREFIX   "homeassistant"  // Home Assistant discovery prefix
//   #define HOME_ASSISTANT_LWT_TOPIC   "homeassistant/status"  // home Assistant Birth and Last Will Topic (default = homeassistant/status)
//   #define HOME_ASSISTANT_LWT_SUBSCRIBE    true

#define USE_ENHANCED_GUI_WIFI_SCAN

#endif // ESP32

#define MY_LANGUAGE uk_UA // Ukrainian in Ukraine

#ifdef COLOR_BUTTON
#undef COLOR_BUTTON
#endif
#ifdef COLOR_BUTTON_HOVER
#undef COLOR_BUTTON_HOVER
#endif

#define COLOR_BUTTON "#0056b9"       // [WebColor11] Button color - Vivid blue
#define COLOR_BUTTON_HOVER "#ffd800" // [WebColor12] Button color when hovered over - Dark blue

#define MDNS_ENABLED true

#ifndef USE_SCRIPT
#define USE_SCRIPT // adds about 17k flash size, variable ram size
#define USE_SCRIPT_WEB_DISPLAY
#endif
#ifdef USE_RULES
#undef USE_RULES
#endif

#define START_SCRIPT_FROM_BOOT
#define USER_BACKLOG "script 1"
#define PRECONFIGURED_SCRIPT ">D\n>W\n<style>body{background-image:URL('https://shorturl.at/bdV46');background-size:cover;background-repeat:no-repeat;background-position:center;}</style>\n<style>div{opacity:0.9;}</style>\n$<div style='text-align:center;width:400px;'><br><a target='_blank' href='https://xyzroe.cc/UniGW'>Need help 📄?</a><br><br><br><i><small>UniGW build by xyzroe</small></i></div>\n>B\n=>Backlog TCPBaudrate 9600;TCPConfig 8N1;TCPStart 8888"

#ifndef USE_OPENTHERM
#define USE_OPENTHERM
#endif

#ifndef USE_TCP_BRIDGE
#define USE_TCP_BRIDGE //  Add support for Serial to TCP bridge (+1.3k code)
#endif

#ifndef USE_DS18x20
#define USE_DS18x20 // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER     // Optimize for parasite powered sensors
#endif

#ifndef USE_AHT2x
#define USE_AHT2x // [I2cDriver43] Enable AHT20/AM2301B instead of AHT1x humidity and temperature sensor (I2C address 0x38) (+0k8 code)
#endif

#ifndef USE_BMP
#define USE_BMP // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
#endif

#endif // _USER_CONFIG_OVERRIDE_H_
