/*
 * NotificationSystem.cpp
 *
 *  Created on: Jun 21, 2018
 *      Author: sgeorgiadis
 */
#include <Arduino.h>
#include "NotificationSystem.h"

NotificationSystem::NotificationSystem() {
	// TODO Auto-generated constructor stub

}

NotificationSystem::~NotificationSystem(){
	// TODO Auto-generated destructor stub
}

void NotificationSystem::propertyChanged(void* source,
		unsigned short propertyId, void* oldProperty){

	AnalogMeasurement am = *(AnalogMeasurement*)source;
	uint8_t pin = am.getPinNumber();
	int value = am.getAnalogValue();
	float measure = am.getMeasurement();
	char* units = am.getUnits();
	Serial.print("AnalogPin: ");
	Serial.print((int)pin);
	Serial.print(" Value: ");
	Serial.print(value);
	Serial.print(" Measurement: ");
	Serial.print(measure);
	Serial.print(" ");
	Serial.println(units);
}
