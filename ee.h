#ifndef __EEPROM_H
#define __EEPROM_H

/*
  Author:     Nima Askari
  WebSite:    http://www.github.com/NimaLTD
  Instagram:  http://instagram.com/github.NimaLTD
  Youtube:    https://www.youtube.com/channel/UCUhY7qY1klJm1d2kulr9ckw
  
 edited by Alireza Zabihi
 fall 2023
  WebSite:    https://github.com/zabihi-alireza
  Instagram:  http://instagram.com/eng.zabihi
  Youtube:   https://www.youtube.com/channel/UCVy2aDz3HU7djNrNOp6jX8w


*/

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdbool.h>
#include "main.h"

//################################################################################################################
bool      ee_init(void);
bool      ee_format(bool keepRamData);
bool      read(uint32_t startVirtualAddress, uint8_t* data);
bool      ee_write(uint32_t startVirtualAddress, uint32_t len, uint8_t* data);
bool      write(uint32_t startVirtualAddress, uint8_t* data); //  only use when _EE_USE_RAM_BYTE is enabled
bool      ee_commit(void);  //  only use when _EE_USE_RAM_BYTE is enabled

uint32_t  ee_maxVirtualAddress(void);

//################################################################################################################

#ifdef __cplusplus
}
#endif

#endif
