/***************************************************************************//**
 * @file
 * @brief Tokens for the Manufacturing Library CLI plugin.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#define DEFINE_MFG_TOKEN(name, type, address, ...) \
  TOKEN_NEXT_ADDRESS(name, (address))              \
  TOKEN_MFG(name, CREATOR_##name, 0, 0, type, 1, __VA_ARGS__)

/** @} END Convenience Macros */

#ifndef TOKEN_NEXT_ADDRESS
  #define TOKEN_NEXT_ADDRESS(region, address)
#endif




#define USERDATA_TOKENS                                 0x1000

//#define CREATOR_FIVE_ELEMENTS                                 0x4E4F
    
#define CREATOR_Xiaomikey_ELEMENTS                      0x584D
#define CREATOR_Lumikey_ELEMENTS                        0x4C4D
#define CREATOR_Insc_ELEMENTS                           0x494D
#define CREATOR_MACAddr_ELEMENTS                        0x4D44
#define CREATOR_DeviceID_ELEMENTS                       0x4449

//#define FIVE_ELEMENTS_LOCATION                        (USERDATA_TOKENS|0x104)    
    
#define Xiaomikey_ELEMENTS_LOCATION                     (USERDATA_TOKENS|0x104)
#define Lumikey_ELEMENTS_LOCATION                       (USERDATA_TOKENS|0x114)
#define Insc_ELEMENTS_LOCATION                          (USERDATA_TOKENS|0x124)
#define MACAddr_ELEMENTS_LOCATION                       (USERDATA_TOKENS|0x134)
#define DeviceID_ELEMENTS_LOCATION                      (USERDATA_TOKENS|0x13C)

#ifdef DEFINETYPES
// Include or define any typedef for tokens here
//typedef uint8_t tokFiveElements[8];
typedef uint8_t tokXiaomikey[16];
typedef uint8_t tokLumikey[16];
typedef uint8_t tokInsc[16];
typedef uint8_t tokMACAddr[8];
typedef uint8_t tokDeviceID[8];
#endif //DEFINETYPES
#ifdef DEFINETOKENS
// Define the actual token storage information here

/*
TOKEN_NEXT_ADDRESS(FIVE_ELEMENTS_ADDRESS, FIVE_ELEMENTS_LOCATION)
TOKEN_MFG(FIVE_ELEMENTS, CREATOR_FIVE_ELEMENTS,
          0, 0, tokFiveElements, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 })
*/

TOKEN_NEXT_ADDRESS(Xiaomikey_ELEMENTS_ADDRESS, Xiaomikey_ELEMENTS_LOCATION)
TOKEN_MFG(Xiaomikey_ELEMENTS, CREATOR_Xiaomikey_ELEMENTS,
          0, 0, tokXiaomikey, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
            0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f })

TOKEN_NEXT_ADDRESS(Lumikey_ELEMENTS_ADDRESS,  Lumikey_ELEMENTS_LOCATION)
TOKEN_MFG(Lumikey_ELEMENTS, CREATOR_Lumikey_ELEMENTS,
          0, 0, tokLumikey, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
            0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f })

TOKEN_NEXT_ADDRESS(Insc_ELEMENTS_ADDRESS,  Insc_ELEMENTS_LOCATION)
TOKEN_MFG(Insc_ELEMENTS, CREATOR_Insc_ELEMENTS,
          0, 0, tokInsc, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
            0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f })

TOKEN_NEXT_ADDRESS(MACAddr_ELEMENTS_ADDRESS,  MACAddr_ELEMENTS_LOCATION)
TOKEN_MFG(MACAddr_ELEMENTS, CREATOR_MACAddr_ELEMENTS,
          0, 0, tokMACAddr, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 })
            
TOKEN_NEXT_ADDRESS(MACAddr_ELEMENTS_ADDRESS,  MACAddr_ELEMENTS_LOCATION)
TOKEN_MFG(MACAddr_ELEMENTS, CREATOR_MACAddr_ELEMENTS,
          0, 0, tokMACAddr, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 })

TOKEN_NEXT_ADDRESS(DeviceID_ELEMENTS_ADDRESS,  DeviceID_ELEMENTS_LOCATION)
TOKEN_MFG(DeviceID_ELEMENTS , CREATOR_DeviceID_ELEMENTS ,
          0, 0, tokDeviceID, 1,
          { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 })

//tokFiveElements five;

//DEFINE_BASIC_TOKEN(FIVE_ELEMENTS,five,0)

#endif //DEFINETOKENS
