// Increase MAC buffers
#undef MAC_CFG_TX_DATA_MAX
#define MAC_CFG_TX_DATA_MAX 20
#undef MAC_CFG_TX_MAX
#define MAC_CFG_TX_MAX 32
#undef MAC_CFG_RX_MAX
#define MAC_CFG_RX_MAX 20

// Increase NV pages to 4 to allow for bigger device tables
#undef NVOCMP_NVPAGES
#define NVOCMP_NVPAGES 4

// Increase the max number of boardcasts, the default broadcast delivery time is 3 seconds
// with the value below this will allow for 1 broadcast every 0.15 second
#define MAX_BCAST 30

#define ZCL_REPORT_DESTINATION_DEVICE
#define BDB_REPORTING
#define CUI_DISABLE
#define NWK_MAX_DEVICE_LIST     50
#define MAX_NEIGHBOR_ENTRIES    50
#define MAX_RTG_ENTRIES         150
#define ZDO_API_ADVANCED

// From https://www.ti.com/lit/an/swra650b/swra650b.pdf
#define LINK_DOWN_TRIGGER 12
#define NWK_ROUTE_AGE_LIMIT 5
#define DEF_NWK_RADIUS 15
#define DEFAULT_ROUTE_REQUEST_RADIUS 8
#define ZDNWKMGR_MIN_TRANSMISSIONS 0
#define ROUTE_DISCOVERY_TIME 13

/**
 * Set default transmit power to 9
 */
#define TXPOWER 9

#define ATTRID_BASIC_TRANSMIT_POWER 0x1337

// Different configs, uncomment for for launchpad firmware
// #define LAUNCHPAD_CONFIG 1

// #ifdef LAUNCHPAD_CONFIG
// #define CONFIG_RF_24GHZ                         0x0000001c
// #define CONFIG_RF_HIGH_PA                       0x0000001d
// #define SET_CCFG_MODE_CONF_XOSC_CAPARRAY_DELTA  0xc1
// #else
// #define CONFIG_RF_24GHZ                         0x0000006
// #define CONFIG_RF_HIGH_PA                       0x0000005
// #define SET_CCFG_MODE_CONF_XOSC_CAPARRAY_DELTA  0xfa
// #endif
