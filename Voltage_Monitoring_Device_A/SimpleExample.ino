#include "AnalogInput/AnalogMeasurement.h"
#include "NotificationSystem.h"

AnalogMeasurement am = AnalogMeasurement(A0, 100,
		//0.043945,
		0.004883,
		0, "V");

NotificationSystem ns = NotificationSystem();

void setup() {
  Serial.begin(115200);

  Serial.print("Starting...");

  am.setPropertyListener(&ns);
}

void loop(){
	am.validate();
}

