//============================================================================
// Name        : utils.cpp
// Author      : David Fernández Esteban
// Description : Utils methods from sonnenTestTask
//============================================================================

//Dependencies
#include "utils.h"

//Libraries
#include <iostream>
#include <stdexcept>

/**
 *  @note Avoid instance. If more methods are added. We have to refactor it to Singleton pattern.
 */
Utils()
{
    throw new std::invalid_argument("Illegal Access");
}

/**
 *  @name Setup 1.
 *  @note Static.
 *  @brief Implementation. Setpoint is equals to the diff of parameters value.
 */
float Utils::calculateSetPoint(float inputPowerP, float outputPowerC)
{
    return inputPowerP - outputPowerC;
}

/**
 * @name Setup 3.
 * @note Static.
 * @brief Implementation. Setpoint is equals to diffPowerD.
 */
float Utils::calculateSetPoint(float diffPowerD)
{
    return diffPowerD;
}

/**
 * @name Setup 4.
 * @note Static.
 * @brief Implementation. Setpoint is equals to the diff of gridPowerG and batteryOutputPower.
 */
float Utils::calculateSetPoint(float gridPowerG, float batteryVoltage, float batteryCurrent)
{
    return gridPowerG - (batteryVoltage * batteryCurrent);
}
