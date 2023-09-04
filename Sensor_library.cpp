#include "Sensor_library.h"
#include <Arduino.h>

  Sensors::Sensors(int RTrig, int REcho, int RDist, int FEcho, int FTrig, int FDist, int LTrig, int LEcho, int LDist, long RDur, long FDur, long LDur) 
  {
 this-> RTrig = RTrig; // right trig and echo
 this-> REcho = REcho; // ""
 this-> RDur = RDur;
 this-> RDist = RDist;
 this-> FEcho = FEcho; // forwards trig and echo
 this-> FTrig = FTrig; // ""
 this-> FDur = FDur;
 this-> FDist = FDist;
 this-> LEcho = LEcho; // left trig and echo
 this-> LTrig = LTrig; // ""
 this-> LDur = LDur;
 this-> LDist = LDist;

  }
void Sensors::Lsensor()
{
   digitalWrite(LTrig, HIGH);
    digitalWrite(LTrig, LOW);
    LDur = pulseIn(LEcho, HIGH);
    LDist = LDur*0.034/2;
    Serial.print("LEFT:");
    Serial.print(LDist);
    Serial.print("cm | ");
    Serial.println();
    delay(10);
  }
