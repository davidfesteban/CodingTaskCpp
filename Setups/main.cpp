//============================================================================
// Name        : main.cpp
// Author      : David Fernández Esteban
// Description : Problems 1,2 and 3 from sonnenTestTask
//============================================================================

/**
 *  @note This file is used as runner.
 */

//Dependencies
#include "constants.h"
#include "utils.h"

//Libraries
#include <iostream>

/**
 * @note Actual values could be in any place. We can secure it obtaining the value this way and not directly accessing the variable member
 */
float getInputPowerP();
float getOutputPowerC();
float getDiffPowerD();
float getGridPowerG();
float getBatteryVoltage();
float getBatteryCurrent();

int main()
{
    //Setup1
    std::cout << Utils::calculateSetPoint(getInputPowerP(),getOutputPowerC()) << std::endl;

    //Setup3
    std::cout << Utils::calculateSetPoint(getDiffPowerD()) << std::endl;

    //Setup4
    std::cout << Utils::calculateSetPoint(getGridPowerG(),getBatteryVoltage(),getBatteryCurrent()) << std::endl;

    return 0;
}

// GETTERS.
float getInputPowerP()
{
    return 5.1234;
}

float getOutputPowerC()
{
    return 2.1234;
}

float getDiffPowerD()
{
    return 3;
}

float getGridPowerG()
{
    return 6.1234;
}

float getBatteryVoltage()
{
    return 5;
}

float getBatteryCurrent()
{
    return 0.5;
}

