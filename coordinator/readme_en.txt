Z-Stack 3.x.0 Coordinator firmware for RF-BM-2652P4I module on CC2652P7 chip (for UZG-01, HMG-01 Plus gateways).

Made from the 202407010 sources published by Koen Kanters (with minor modifications):
1. Built on Windows 11 computer, all firmware files are slightly smaller than ones, published by Koen.
2. CCS 12.8 was used (since the binary files are no different from those built with CCS 12.6).
3. Changed CC2652P7 transmitter power settings table to allow 20 dBm TX power, according to the recommended method on the E2E TI forum (https://e2e.ti.com/support/wireless-connectivity/zigbee-thread-group/zigbee-and-thread/f/zigbee-thread-forum/1274602/launchxl-cc1352p-building-zigbee-network-processor-znp-example-app-for-cc2652p7-chip).
4. Changed CC2652P7 chip settings based on RF-BM-2652P4I specifications (https://www.rfstariot.com/uploadfile/downloads/RF-BM-2652P4%20RF-BM-2652P4I%20Hardware%20Datasheet%20V1.1_20240823.pdf) and CC13xx/CC26xx Hardware Configuration and PCB Design Connections manual (https://www.ti.com/lit/an/swra640h/swra640h.pdf):
   - DCDC converter built into the chip is enabled (as it is used according to the module schematic),
   - 48Mhz crystal capacitors built into the chip are turned off (as the module schematic shows external capacitors used, which are necessary for 20dBm),
   - 'Force VDDR' is enabled (necessary for 20dBm).
4. Internal build number changed to 20240711.

