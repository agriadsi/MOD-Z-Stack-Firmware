# Прошивка роутера Z-Stack 3.x.0 для модуля RF-BM-2652P4I на чипе СС2652P7 (для шлюзов UZG-01, HMG-01 Plus).
[![en](https://img.shields.io/badge/lang-en-blue.svg)](https://github.com/agriadsi/MOD-Z-Stack-Firmware/tree/ea873076a2cfe9321f8d3231d5cc39a0b935c2af/router/README.md)
[![ru](https://img.shields.io/badge/lang-ru-red.svg)](https://github.com/agriadsi/MOD-Z-Stack-Firmware/tree/ea873076a2cfe9321f8d3231d5cc39a0b935c2af/router/README.ru.md)


Сделано на основе опубликованных исходников Koen Kanters [20221102](https://github.com/Koenkk/Z-Stack-firmware/tree/517fbd0d68fc3369c9e49511977aa7594e48d505/router/Z-Stack_3.x.0) (на основе прошивки для CC2652P) с исплользовнием [SDK 7.41.00.17](https://www.ti.com/tool/download/SIMPLELINK-LOWPOWER-F2-SDK/7.41.00.17) с примененным бинарным патчем **maclib_*.a** от прошивки [20240710 firmware](https://github.com/Koenkk/Z-Stack-firmware/tree/ab4d8deb8a5203c3fbc7d292ba95083abc3f0bc5/coordinator/Z-Stack_3.x.0):
1. Собрано на компьютере с Windows 11.
2. Использовался CCS 12.8.
3. SDK 7.41.00.17.
4. Изменена таблица настройки передатчика CC2652P7 для получения возможности установки мощности 20 dBm, в соответствии с [рекомендованным методом на форуме E2E TI](https://e2e.ti.com/support/wireless-connectivity/zigbee-thread-group/zigbee-and-thread/f/zigbee-thread-forum/1274602/launchxl-cc1352p-building-zigbee-network-processor-znp-example-app-for-cc2652p7-chip).
5. Изменены настройки чипа СС2652P7 на основе [спецификаций RF-BM-2652P4I](https://www.rfstariot.com/uploadfile/downloads/RF-BM-2652P4%20RF-BM-2652P4I%20Hardware%20Datasheet%20V1.1_20240823.pdf) и [руководства CC13xx/CC26xx Hardware Configuration and PCB Design](https://www.ti.com/lit/an/swra640h/swra640h.pdf):
   - включен встроенный в чип DCDC конвертер (т.к. по схеме модуля он используется),
   - выключены встроенные в чип конденсаторы кристалла 48Mhz (т.к. по схеме модуля есть внешние, необходимые для 20dBm),
   - включено 'Force VDDR' (необходимо для 20dBm).
6. Добавлен интерфейс NPI UART для возможности передачи номера сборки в панель управления прошивки XZG. 
7. Внутренний номер изменен на 20240920.
