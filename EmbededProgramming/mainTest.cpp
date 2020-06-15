//============================================================================
// Name        : mainTest.cpp
// Author      : David Fernández Esteban
// Description : Unit tesing main.cpp from Exercise_Embedded_Programming
//============================================================================

//Dependencies
#include "main.h"

//Libraries
#include <iostream>
#include <cassert>

const int DATA_SIZE = 4;

/**
 * @brief Assert false if condition is false.
 * @param cond. Example: data == data2.
 */
void verifyResult(bool cond)
{
    if (!cond)
    {
        std::cout << "Unit test failed at " << __FILE__ << ", " << __LINE__ << std::endl;
        assert(false);
    }
}

void runTest(void)
{
    uint32_t dataOffsetArray [DATA_SIZE] = { 0, 0xFFFFFFFF, (unsigned)-1, 40};
    uint32_t expectedValues [DATA_SIZE] = {0, 0xFFFFFFFF, 0xFFFFFFFF, 40};
    DataContainment data1;
    data1.baseAddress = 0;
    //Test multiple values
    for(int i = 0; i < DATA_SIZE; ++i)
    {
        verifyResult(getResultingAddress(dataOffsetArray[i], data1) == expectedValues[i]);
    }
}
