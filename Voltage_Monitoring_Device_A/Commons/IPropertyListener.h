/*
 * IPropertyListener.h
 *
 *  Created on: 21 Ξ‘Ο€Ο� 2018
 *      Author: Synodiporos
 */

#ifndef COMMONS_IPROPERTYLISTENER_H_
#define COMMONS_IPROPERTYLISTENER_H_

class IPropertyListener {
public:
	virtual IPropertyListener();
	virtual ~IPropertyListener() = 0;

	virtual void propertyChanged(void* source,
			unsigned short propertyId, void* oldProperty) = 0;
};

#endif /* COMMONS_IPROPERTYLISTENER_H_ */
