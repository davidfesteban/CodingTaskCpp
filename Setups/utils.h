//============================================================================
// Name        : utils.h
// Author      : David Fernández Esteban
// Description : Header file from sonnenTestTask
//============================================================================

#ifndef UTILS_H
#define UTILS_H

/**
 * @note If more methods are added. We have to refactor it to Singleton pattern.
 */

class Utils
{
public:
    /**
    * @brief Calculate SetPoint in a Setup type 1.
    * @param inputPowerP. Input power P in watts.
    * @param outputPowerC. Output power or Consumption in watts.
    * @return setPoint. Result of calculation with inputPowerP and outputPowerC.
    */
    static float calculateSetPoint(float inputPowerP, float outputPowerC);

    /**
    * @brief Calculate SetPoint in a Setup type 3.
    * @param diffPower. The diff between powers in watts.
    * @return setPoint. Result of calculation with diffPowerD.
    */
    static float calculateSetPoint(float diffPowerD);

    /**
    * @brief Calculate SetPoint in a Setup type 4.
    * @param diffPower. The diff between powers in watts.
    * @return setPoint. Result of calculation with diffPowerD.
    */
    static float calculateSetPoint(float gridPowerG, float batteryVoltage, float batteryCurrent);

private:
    /**
     *  @note Avoid instance
     */
    Utils();
};

#endif
