## CNC driver source prepared for platform NUCLEO-32F439ZI. Project prepared in STM32CubeIDE.

Simplest way to use it:

1. Clone repository

```
    git clone https://github.com/r-gal/CNC_Nucleo_stm32f439 --recursive

```
3. Open .cproject in STM32CubeIDE
4. Change IP default IP address into wanted values in CNC_source/EthernetConfig.hpp

```
  #define DEFAULT_IP 0xC0A83732 /*192.168.55.50*/
  #define DEFAULT_DHCP_SERVER  0xC0A83701 /*192.168.55.1*/
  #define DEFAULT_DNS_SERVER 0xC0A83701 /*192.168.55.1*/
  #define DEFAULT_SUBNET_MASK 0xFFFFFF00
  #define DEFAULT_GATEWAY 0xC0A83701 /*192.168.55.1*/

```
5. Build all
6. Connect NUCLEO-32F439ZI and Run code
7. Run GUI app  

## Used pinout:

```
PE9 - AXE_X_PULSE
PE11 - AXE_X_DIR
PF14 - AXE_X_LIM
PC6 - AXE_Y_PULSE
PB15 - AXE_Y_DIR
PB12 - AXE_Y_LIM
PA6 - AXE_Z_PULSE
PD14 - AXE_Z_DIR
PD15 - AXE_Z_LIM
PB8 - SPINDLE_PULSE
PB9 - SPINDLE_CLOCKWISE
PA5 - SPINDLE_CCLOCKWISE
PB4 - PROBE
PF12 - ESTOP

```
