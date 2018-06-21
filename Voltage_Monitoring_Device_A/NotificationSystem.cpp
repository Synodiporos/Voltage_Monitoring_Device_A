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

NotificationSystem::~NotificationSystem() {
	// TODO Auto-generated destructor stub
}

void NotificationSystem::propertyChanged(void* source,
		unsigned short propertyId, void* oldProperty){

	AnalogMeasurement am = *(AnalogMeasurement*)source;
	uint8_t pin = am.getPinNumber();
	Serial.print("Measurement of ");
	Serial.print((int)pin);
	Serial.println(" is ");
}
