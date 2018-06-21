/*
 * NotificationSystem.h
 *
 *  Created on: Jun 21, 2018
 *      Author: sgeorgiadis
 */

#ifndef NOTIFICATIONSYSTEM_H_
#define NOTIFICATIONSYSTEM_H_
#include "Commons/IPropertyListener.h"
#include "AnalogInput/AnalogMeasurement.h"

class NotificationSystem : public IPropertyListener{
public:
	NotificationSystem();
	virtual ~NotificationSystem();

	void propertyChanged(void* source,
				unsigned short propertyId, void* oldProperty);

};

#endif /* NOTIFICATIONSYSTEM_H_ */
