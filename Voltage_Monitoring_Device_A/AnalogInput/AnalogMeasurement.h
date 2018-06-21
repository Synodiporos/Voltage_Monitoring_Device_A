/*
 * AnalogMeasurement.h
 *
 *  Created on: Jun 21, 2018
 *      Author: sgeorgiadis
 */

#ifndef ANALOGINPUT_ANALOGMEASUREMENT_H_
#define ANALOGINPUT_ANALOGMEASUREMENT_H_

#include "AnalogInput.h"

class AnalogMeasurement: public AnalogInput {
public:
	AnalogMeasurement(uint8_t pinNumber);
	AnalogMeasurement(uint8_t pinNumber, uint8_t spv);
	AnalogMeasurement(uint8_t pinNumber, uint8_t spv, float coef);
	AnalogMeasurement(uint8_t pinNumber, uint8_t spv, float coef, char* units);
	AnalogMeasurement(uint8_t pinNumber, uint8_t spv, float coef,
			float offset, char* units);
	virtual ~AnalogMeasurement();

	void setCoefficient(float coef);
	float getCoefficient();
	void setOffset(float offset);
	float getOffset();
	void setUnits(char* units);
	char* getUnits();

	static int convert(float vref, float realMaxValue);

protected:
	float getMeasurement();
	void analogValueChanged(
			unsigned short int analogValue, unsigned short int old);

private:
	float coef = 1;
	float offset = 0;
	char* units = nullptr;
};

#endif /* ANALOGINPUT_ANALOGMEASUREMENT_H_ */
