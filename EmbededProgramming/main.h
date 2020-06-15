//============================================================================
// Name        : main.h
// Author      : David Fernández Esteban
// Description : Header file from Exercise_Embedded_Programming
//============================================================================

//Libraries
#include <iostream>

#ifndef MAIN_H
#define MAIN_H

// Definition of the struct
typedef struct DataContainment_t
{
    uint32_t baseAddress;
} DataContainment;


/**
 * @brief Obtains the resulting address of operating parameters value.
 * @param dataOffset. Contains in its value, the address used as offset
 * @param dataStruct. dataStruct.baseAddress store the base address to sum
 * @return resultingAddress. Contains in its value the result of operating the parameters value.
 */
static uint32_t getResultingAddress(uint32_t dataOffset, const DataContainment &dataStruct);

#endif
