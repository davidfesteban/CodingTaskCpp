//============================================================================
// Name        : main.cpp
// Author      : David Fernández Esteban
// Description : Problems from Exercise_Embedded_Programming
//============================================================================

//Dependencies
#include "main.h"
#include "mainTest.cpp"

//Libraries
#include <iostream>

// main loop
int main (void)
{
    uint32_t dataOffset = 0;
    uint32_t resultingAddress = 0;
    DataContainment data1;
    data1.baseAddress = 0;

    // Call getResultingAddress
    resultingAddress = getResultingAddress(dataOffset, data1);

    // Run unit test
    runTest();
    return 0;
}

/**
 * @note Implementation. Simple sum addresses stored in parameters.
 */
static uint32_t getResultingAddress(uint32_t dataOffset, const DataContainment &dataStruct)
{
    return dataOffset + dataStruct.baseAddress;
}
