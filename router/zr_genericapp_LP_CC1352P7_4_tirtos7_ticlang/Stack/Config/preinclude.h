#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define CODE_REVISION_NUMBER 20241002
#define CODE_REVISION_STR STR(CODE_REVISION_NUMBER)

// Increase MAC buffers
#undef MAC_CFG_TX_DATA_MAX
#define MAC_CFG_TX_DATA_MAX 20
#undef MAC_CFG_TX_MAX
#define MAC_CFG_TX_MAX 32
#undef MAC_CFG_RX_MAX
#define MAC_CFG_RX_MAX 20

// Increase NV pages to 3 to allow for bigger device tables
#undef NVOCMP_NVPAGES
#define NVOCMP_NVPAGES 3

// Increase the max number of broadcasts, the default broadcast delivery time is 3 seconds
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
