/*
 * AnalogMeasurement.cpp
 *
 *  Created on: Jun 21, 2018
 *      Author: sgeorgiadis
 */

#include "AnalogMeasurement.h"

AnalogMeasurement::AnalogMeasurement(uint8_t pinNumber)
	: AnalogInput(pinNumber){

}

AnalogMeasurement::AnalogMeasurement(
		uint8_t pinNumber, uint8_t spv)
	: AnalogInput(pinNumber, spv){

}

AnalogMeasurement::AnalogMeasurement(
		uint8_t pinNumber, uint8_t spv, float coef)
	: AnalogInput(pinNumber, spv), coef(coef){

}

AnalogMeasurement::AnalogMeasurement(
		uint8_t pinNumber, uint8_t spv, float coef, char* units)
	: AnalogInput(pinNumber, spv), coef(coef), units(units){

}

AnalogMeasurement::AnalogMeasurement(
		uint8_t pinNumber, uint8_t spv, float coef,
			float offset, char* units)
	: AnalogInput(pinNumber, spv),
	  coef(coef), offset(offset), units(units){

}

AnalogMeasurement::~AnalogMeasurement() {
	// TODO Auto-generated destructor stub
}

void AnalogMeasurement::setCoefficient(float coef){
	this->coef = coef;
}

float AnalogMeasurement::getCoefficient(){
	return this->coef;
}

void AnalogMeasurement::setOffset(float offset){
	this->offset = offset;
}

float AnalogMeasurement::getOffset(){
	return this->offset;
}

void AnalogMeasurement::setUnits(char* units){
	this->units = units;
}

char* AnalogMeasurement::getUnits(){
	return this->units;
}

float AnalogMeasurement::getMeasurement(){
	return getAnalogValue()*coef - offset;
}

