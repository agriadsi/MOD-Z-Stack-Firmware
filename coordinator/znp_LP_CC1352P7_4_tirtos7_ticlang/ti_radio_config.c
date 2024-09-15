/*
 *  ======== ti_radio_config.c ========
 *  Configured RadioConfig module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC1352P7RGZ
 *  by the SysConfig tool.
 *
 *  Radio Config module version : 1.18.0
 *  SmartRF Studio data version : 2.31.0
 */

#include "ti_radio_config.h"
#include DeviceFamily_constructPath(rf_patches/rf_patch_cpe_ieee_802_15_4.h)


// *********************************************************************************
//   RF Frontend configuration
// *********************************************************************************
// RF design based on: LP_CC1352P7-4

// TX Power tables
// The RF_TxPowerTable_DEFAULT_PA_ENTRY and RF_TxPowerTable_HIGH_PA_ENTRY macros are defined in RF.h.
// The following arguments are required:
// RF_TxPowerTable_DEFAULT_PA_ENTRY(bias, gain, boost, coefficient)
// RF_TxPowerTable_HIGH_PA_ENTRY(bias, ibboost, boost, coefficient, ldoTrim)
// See the Technical Reference Manual for further details about the "txPower" Command field.
// The PA settings require the CCFG_FORCE_VDDR_HH = 0 unless stated otherwise.

// 2400 MHz, 5 dBm
RF_TxPowerTable_Entry txPowerTable_2400_pa5[TXPOWERTABLE_2400_PA5_SIZE] =
{
    {-20, RF_TxPowerTable_DEFAULT_PA_ENTRY(8, 3, 0, 2) }, // 0x04C8
    {-18, RF_TxPowerTable_DEFAULT_PA_ENTRY(10, 3, 0, 2) }, // 0x04CA
    {-15, RF_TxPowerTable_DEFAULT_PA_ENTRY(13, 3, 0, 3) }, // 0x06CD
    {-12, RF_TxPowerTable_DEFAULT_PA_ENTRY(16, 3, 0, 5) }, // 0x0AD0
    {-10, RF_TxPowerTable_DEFAULT_PA_ENTRY(19, 3, 0, 5) }, // 0x0AD3
    {-9, RF_TxPowerTable_DEFAULT_PA_ENTRY(20, 3, 0, 6) }, // 0x0CD4
    {-6, RF_TxPowerTable_DEFAULT_PA_ENTRY(19, 2, 0, 11) }, // 0x1693
    {-5, RF_TxPowerTable_DEFAULT_PA_ENTRY(21, 2, 0, 11) }, // 0x1695
    {-3, RF_TxPowerTable_DEFAULT_PA_ENTRY(25, 2, 0, 12) }, // 0x1899
    {0, RF_TxPowerTable_DEFAULT_PA_ENTRY(29, 1, 0, 22) }, // 0x2C5D
    {1, RF_TxPowerTable_DEFAULT_PA_ENTRY(33, 1, 0, 25) }, // 0x3261
    {2, RF_TxPowerTable_DEFAULT_PA_ENTRY(38, 1, 0, 31) }, // 0x3E66
    {3, RF_TxPowerTable_DEFAULT_PA_ENTRY(47, 1, 0, 36) }, // 0x486F
    {4, RF_TxPowerTable_DEFAULT_PA_ENTRY(32, 0, 0, 65) }, // 0x8220
    {5, RF_TxPowerTable_DEFAULT_PA_ENTRY(46, 0, 0, 59) }, // 0x762E
    RF_TxPowerTable_TERMINATION_ENTRY
};

// 2400 MHz, 5 + 10 dBm
RF_TxPowerTable_Entry txPowerTable_2400_pa5_10[TXPOWERTABLE_2400_PA5_10_SIZE] =
{
    {-20, RF_TxPowerTable_DEFAULT_PA_ENTRY(8, 3, 0, 2) }, // 0x04C8
    {-18, RF_TxPowerTable_DEFAULT_PA_ENTRY(10, 3, 0, 2) }, // 0x04CA
    {-15, RF_TxPowerTable_DEFAULT_PA_ENTRY(13, 3, 0, 3) }, // 0x06CD
    {-12, RF_TxPowerTable_DEFAULT_PA_ENTRY(16, 3, 0, 5) }, // 0x0AD0
    {-10, RF_TxPowerTable_DEFAULT_PA_ENTRY(19, 3, 0, 5) }, // 0x0AD3
    {-9, RF_TxPowerTable_DEFAULT_PA_ENTRY(20, 3, 0, 6) }, // 0x0CD4
    {-6, RF_TxPowerTable_DEFAULT_PA_ENTRY(19, 2, 0, 11) }, // 0x1693
    {-5, RF_TxPowerTable_DEFAULT_PA_ENTRY(21, 2, 0, 11) }, // 0x1695
    {-3, RF_TxPowerTable_DEFAULT_PA_ENTRY(25, 2, 0, 12) }, // 0x1899
    {0, RF_TxPowerTable_DEFAULT_PA_ENTRY(29, 1, 0, 22) }, // 0x2C5D
    {1, RF_TxPowerTable_DEFAULT_PA_ENTRY(33, 1, 0, 25) }, // 0x3261
    {2, RF_TxPowerTable_DEFAULT_PA_ENTRY(38, 1, 0, 31) }, // 0x3E66
    {3, RF_TxPowerTable_DEFAULT_PA_ENTRY(47, 1, 0, 36) }, // 0x486F
    {4, RF_TxPowerTable_DEFAULT_PA_ENTRY(32, 0, 0, 65) }, // 0x8220
    {5, RF_TxPowerTable_DEFAULT_PA_ENTRY(46, 0, 0, 59) }, // 0x762E
    {6, RF_TxPowerTable_HIGH_PA_ENTRY(38, 0, 1, 39, 20) }, // 0x144F26
    {7, RF_TxPowerTable_HIGH_PA_ENTRY(42, 0, 1, 39, 20) }, // 0x144F2A
    {8, RF_TxPowerTable_HIGH_PA_ENTRY(33, 1, 0, 27, 20) }, // 0x143661
    {9, RF_TxPowerTable_HIGH_PA_ENTRY(26, 1, 1, 25, 16) }, // 0x10335A
    {10, RF_TxPowerTable_HIGH_PA_ENTRY(31, 1, 1, 31, 16) }, // 0x103F5F

    // From @Koenkk patched znp_CC1352P_2_LAUNCHXL_tirtos7_ticlang
    {11, .value.rawValue = (0x3021cb), .value.paType = RF_TxPowerTable_HighPA },
    {12, .value.rawValue = (0x3f27cc), .value.paType = RF_TxPowerTable_HighPA },
    {13, .value.rawValue = (0x3fc3cd), .value.paType = RF_TxPowerTable_HighPA },

    // From TI's original znp_CC1352P_2_LAUNCHXL_tirtos7_ticlang
    {14, RF_TxPowerTable_HIGH_PA_ENTRY(22, 3, 1, 19, 27) }, // 0x1B27D6
    {15, RF_TxPowerTable_HIGH_PA_ENTRY(26, 3, 1, 23, 27) }, // 0x1B2FDA
    {16, RF_TxPowerTable_HIGH_PA_ENTRY(30, 3, 1, 28, 27) }, // 0x1B39DE
    {17, RF_TxPowerTable_HIGH_PA_ENTRY(37, 3, 1, 39, 27) }, // 0x1B4FE5
    {18, RF_TxPowerTable_HIGH_PA_ENTRY(32, 3, 1, 35, 48) }, // 0x3047E0
    {19, RF_TxPowerTable_HIGH_PA_ENTRY(34, 3, 1, 48, 63) }, // 0x3F61E2
    {20, RF_TxPowerTable_HIGH_PA_ENTRY(53, 3, 1, 58, 63) }, // 0x3F75F5
    RF_TxPowerTable_TERMINATION_ENTRY
};


// 433 MHz, 13 dBm
RF_TxPowerTable_Entry txPowerTable_433_pa13[TXPOWERTABLE_433_PA13_SIZE] =
{
    {-11, RF_TxPowerTable_DEFAULT_PA_ENTRY(2, 3, 0, 7) }, // 0x0EC2
    {-8, RF_TxPowerTable_DEFAULT_PA_ENTRY(3, 3, 0, 7) }, // 0x0EC3
    {-6, RF_TxPowerTable_DEFAULT_PA_ENTRY(4, 3, 0, 7) }, // 0x0EC4
    {0, RF_TxPowerTable_DEFAULT_PA_ENTRY(9, 3, 0, 16) }, // 0x20C9
    {1, RF_TxPowerTable_DEFAULT_PA_ENTRY(10, 3, 0, 16) }, // 0x20CA
    {2, RF_TxPowerTable_DEFAULT_PA_ENTRY(12, 3, 0, 19) }, // 0x26CC
    {3, RF_TxPowerTable_DEFAULT_PA_ENTRY(14, 3, 0, 23) }, // 0x2ECE
    {4, RF_TxPowerTable_DEFAULT_PA_ENTRY(16, 3, 0, 23) }, // 0x2ED0
    {5, RF_TxPowerTable_DEFAULT_PA_ENTRY(18, 3, 0, 28) }, // 0x38D2
    {6, RF_TxPowerTable_DEFAULT_PA_ENTRY(22, 3, 0, 32) }, // 0x40D6
    {7, RF_TxPowerTable_DEFAULT_PA_ENTRY(26, 3, 0, 35) }, // 0x46DA
    {8, RF_TxPowerTable_DEFAULT_PA_ENTRY(32, 3, 0, 44) }, // 0x58E0
    {9, RF_TxPowerTable_DEFAULT_PA_ENTRY(40, 3, 0, 51) }, // 0x66E8
    {10, RF_TxPowerTable_DEFAULT_PA_ENTRY(16, 2, 0, 44) }, // 0x5890
    {11, RF_TxPowerTable_DEFAULT_PA_ENTRY(24, 2, 0, 64) }, // 0x8098
    {12, RF_TxPowerTable_DEFAULT_PA_ENTRY(19, 0, 0, 74) }, // 0x9413
    {13, RF_TxPowerTable_DEFAULT_PA_ENTRY(63, 0, 0, 0) }, // 0x003F
    RF_TxPowerTable_TERMINATION_ENTRY
};



//*********************************************************************************
//  RF Setting:   IEEE 802.15.4-2006, 250 kbps, OQPSK, DSSS = 1:8, 10 dBm
//
//  PHY:          ieee154p10
//  Setting file: setting_ieee_802_15_4_10_dbm.json
//*********************************************************************************

// PARAMETER SUMMARY
// Channel - Frequency (MHz): 2405
// TX Power (dBm): 10

// TI-RTOS RF Mode Object
RF_Mode RF_prop_ieee154 =
{
    .rfMode = RF_MODE_AUTO,
    .cpePatchFxn = &rf_patch_cpe_ieee_802_15_4,
    .mcePatchFxn = 0,
    .rfePatchFxn = 0
};

// Overrides for CMD_RADIO_SETUP_PA
uint32_t pOverrides_ieee154[] =
{
    // override_ieee_802_15_4.json
    // Rx: Set LNA bias current offset to +15 to saturate trim to max (default: 0)
    (uint32_t)0x000F8883,
    // Tx: Set DCDC settings IPEAK=3, dither = off
    (uint32_t)0x00F388D3,
    (uint32_t)0xFFFFFFFF
};

// Overrides for CMD_RADIO_SETUP_PA
uint32_t pOverrides_ieee154TxStd[] =
{
    // override_txstd_placeholder.json
    // TX Standard power override
    TX_STD_POWER_OVERRIDE(0x762E),
    // The ANADIV radio parameter based on LO divider and front end settings
    (uint32_t)0x05320703,
    // override_txstd_settings.json
    // IEEE 15.4: Set IPEAK = 3 and DCDC dither off for TX
    (uint32_t)0x00F388D3,
    // Set RTIM offset to default for standard PA
    (uint32_t)0x00008783,
    // Set synth mux to default value for standard PA
    (uint32_t)0x050206C3,
    // Set TXRX pin to 0 in RX and high impedance in idle/TX. 
    HW_REG_OVERRIDE(0x60A8,0x0401),
    (uint32_t)0xFFFFFFFF
};

// Overrides for CMD_RADIO_SETUP_PA
uint32_t pOverrides_ieee154Tx20[] =
{
    // override_tx20_placeholder.json
    // TX HighPA power override
    TX20_POWER_OVERRIDE(0x00103F5F),
    // The ANADIV radio parameter based on LO divider and front end settings
    (uint32_t)0x01C20703,
    // override_tx10dbm_settings.json
    // IEEE 15.4: Set IPEAK = 7 and DCDC dither off for TX
    (uint32_t)0x00F788D3,
    // IEEE 15.4: Set RTIM offset to 3 for high power PA
    (uint32_t)0x00030783,
    // IEEE 15.4: Set synth mux for high power PA
    (uint32_t)0x010206C3,
    // IEEE 15.4: Set TXRX pin to 0 in RX/TX and high impedance in idle
    HW_REG_OVERRIDE(0x60A8,0x0001),
    // Set VCTRIM to 0 for 20 dBm PA
    ADI_HALFREG_OVERRIDE(1,26,0xF,0x0),
    // Set VCTRIM to 0 for 20 dBm PA
    ADI_HALFREG_OVERRIDE(1,27,0x7,0x0),
    (uint32_t)0xFFFFFFFF
};



// CMD_RADIO_SETUP_PA
// Radio Setup Command for Pre-Defined Schemes
const rfc_CMD_RADIO_SETUP_PA_t RF_cmdRadioSetup_ieee154 =
{
    .commandNo = 0x0802,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x1,
    .condition.nSkip = 0x0,
    .mode = 0x01,
    .loDivider = 0x00,
    .config.frontEndMode = 0x0,
    .config.biasMode = 0x1,
    .config.analogCfgMode = 0x0,
    .config.bNoFsPowerUp = 0x0,
    .config.bSynthNarrowBand = 0x0,
    .txPower = 0xFFFF,
    .pRegOverride = pOverrides_ieee154,
    .pRegOverrideTxStd = pOverrides_ieee154TxStd,
    .pRegOverrideTx20 = pOverrides_ieee154Tx20
};

// CMD_FS
// Frequency Synthesizer Programming Command
const rfc_CMD_FS_t RF_cmdFs_ieee154 =
{
    .commandNo = 0x0803,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x1,
    .condition.nSkip = 0x0,
    .frequency = 0x0965,
    .fractFreq = 0x0000,
    .synthConf.bTxMode = 0x0,
    .synthConf.refFreq = 0x0,
    .__dummy0 = 0x00,
    .__dummy1 = 0x00,
    .__dummy2 = 0x00,
    .__dummy3 = 0x0000
};

// CMD_IEEE_TX
// IEEE 802.15.4 Transmit Command
const rfc_CMD_IEEE_TX_t RF_cmdIeeeTx_ieee154 =
{
    .commandNo = 0x2C01,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x1,
    .condition.nSkip = 0x0,
    .txOpt.bIncludePhyHdr = 0x0,
    .txOpt.bIncludeCrc = 0x0,
    .txOpt.payloadLenMsb = 0x0,
    .payloadLen = 0x1E,
    .pPayload = 0,
    .timeStamp = 0x00000000
};

// CMD_IEEE_RX
// IEEE 802.15.4 Receive Command
const rfc_CMD_IEEE_RX_t RF_cmdIeeeRx_ieee154 =
{
    .commandNo = 0x2801,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x1,
    .condition.nSkip = 0x0,
    .channel = 0x00,
    .rxConfig.bAutoFlushCrc = 0x0,
    .rxConfig.bAutoFlushIgn = 0x0,
    .rxConfig.bIncludePhyHdr = 0x0,
    .rxConfig.bIncludeCrc = 0x0,
    .rxConfig.bAppendRssi = 0x1,
    .rxConfig.bAppendCorrCrc = 0x1,
    .rxConfig.bAppendSrcInd = 0x0,
    .rxConfig.bAppendTimestamp = 0x0,
    .pRxQ = 0,
    .pOutput = 0,
    .frameFiltOpt.frameFiltEn = 0x0,
    .frameFiltOpt.frameFiltStop = 0x0,
    .frameFiltOpt.autoAckEn = 0x0,
    .frameFiltOpt.slottedAckEn = 0x0,
    .frameFiltOpt.autoPendEn = 0x0,
    .frameFiltOpt.defaultPend = 0x0,
    .frameFiltOpt.bPendDataReqOnly = 0x0,
    .frameFiltOpt.bPanCoord = 0x0,
    .frameFiltOpt.maxFrameVersion = 0x3,
    .frameFiltOpt.fcfReservedMask = 0x0,
    .frameFiltOpt.modifyFtFilter = 0x0,
    .frameFiltOpt.bStrictLenFilter = 0x0,
    .frameTypes.bAcceptFt0Beacon = 0x1,
    .frameTypes.bAcceptFt1Data = 0x1,
    .frameTypes.bAcceptFt2Ack = 0x1,
    .frameTypes.bAcceptFt3MacCmd = 0x1,
    .frameTypes.bAcceptFt4Reserved = 0x1,
    .frameTypes.bAcceptFt5Reserved = 0x1,
    .frameTypes.bAcceptFt6Reserved = 0x1,
    .frameTypes.bAcceptFt7Reserved = 0x1,
    .ccaOpt.ccaEnEnergy = 0x0,
    .ccaOpt.ccaEnCorr = 0x0,
    .ccaOpt.ccaEnSync = 0x0,
    .ccaOpt.ccaCorrOp = 0x1,
    .ccaOpt.ccaSyncOp = 0x1,
    .ccaOpt.ccaCorrThr = 0x0,
    .ccaRssiThr = 0x64,
    .__dummy0 = 0x00,
    .numExtEntries = 0x00,
    .numShortEntries = 0x00,
    .pExtEntryList = 0,
    .pShortEntryList = 0,
    .localExtAddr = 0x12345678,
    .localShortAddr = 0xABBA,
    .localPanID = 0x0000,
    .__dummy1 = 0x000000,
    .endTrigger.triggerType = 0x1,
    .endTrigger.bEnaCmd = 0x0,
    .endTrigger.triggerNo = 0x0,
    .endTrigger.pastTrig = 0x0,
    .endTime = 0x00000000
};

// CMD_IEEE_CSMA
// IEEE 802.15.4 CSMA-CA Command
const rfc_CMD_IEEE_CSMA_t RF_cmdIeeeCsma_ieee154 =
{
    .commandNo = 0x2C02,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x0,
    .condition.nSkip = 0x0,
    .randomState = 0x0000,
    .macMaxBE = 0x00,
    .macMaxCSMABackoffs = 0x00,
    .csmaConfig.initCW = 0x0,
    .csmaConfig.bSlotted = 0x0,
    .csmaConfig.rxOffMode = 0x0,
    .NB = 0x00,
    .BE = 0x00,
    .remainingPeriods = 0x00,
    .lastRssi = 0x00,
    .endTrigger.triggerType = 0x0,
    .endTrigger.bEnaCmd = 0x0,
    .endTrigger.triggerNo = 0x0,
    .endTrigger.pastTrig = 0x0,
    .lastTimeStamp = 0x00000000,
    .endTime = 0x00000000
};

// CMD_IEEE_RX_ACK
// IEEE 802.15.4 Receive Acknowledgement Command
const rfc_CMD_IEEE_RX_ACK_t RF_cmdIeeeRxAck_ieee154 =
{
    .commandNo = 0x2C03,
    .status = 0x0000,
    .pNextOp = 0,
    .startTime = 0x00000000,
    .startTrigger.triggerType = 0x0,
    .startTrigger.bEnaCmd = 0x0,
    .startTrigger.triggerNo = 0x0,
    .startTrigger.pastTrig = 0x0,
    .condition.rule = 0x0,
    .condition.nSkip = 0x0,
    .seqNo = 0x00,
    .endTrigger.triggerType = 0x0,
    .endTrigger.bEnaCmd = 0x0,
    .endTrigger.triggerNo = 0x0,
    .endTrigger.pastTrig = 0x0,
    .endTime = 0x00000000
};


