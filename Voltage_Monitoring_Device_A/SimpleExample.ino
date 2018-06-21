#include "AnalogInput/AnalogInput.h"
#include "NotificationSystem.h"

//AnalogMeasurement am = AnalogMeasurement(A0, 10,
//		43.945, 0, "KV");

//NotificationSystem ns = NotificationSystem();

void setup() {
  Serial.begin(115200);

  Serial.print("Starting...");

  //am.setPropertyListener(&ns);
}

void loop(){
	//am.validate();
}

