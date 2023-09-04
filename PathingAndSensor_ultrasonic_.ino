// defining which pins control what and other variables (the Trig and echo pins as well as var for calcs of distance)
  #include "Sensor_library.h"
  #include <Arduino.h>
  /*
  const int RTrig = 7; // right trig and echo
  const int REcho = 8; // ""
  long RDur;
  int RDist;
  const int FEcho = 10; // forwards trig and echo
  const int FTrig = 9; // ""
  long FDur;
  int FDist;
  const int LEcho = 12; // left trig and echo
  const int LTrig = 11; // ""
  long LDur;
  int LDist;
  */
//

void setup() {
  // put your setup code here, to run once:
Serial.begin(2000000);
pinMode(RTrig, OUTPUT);
pinMode(REcho, INPUT);
//
pinMode(FTrig, OUTPUT);
pinMode(FEcho, INPUT);
//
pinMode(LTrig, OUTPUT);
pinMode(LEcho, INPUT);
//
digitalWrite(RTrig, LOW);
digitalWrite(FTrig, LOW);
digitalWrite(LTrig, LOW);
//
digitalWrite(REcho, LOW);
digitalWrite(FEcho, LOW);
digitalWrite(LEcho, LOW);
//
delay(2);

}

void loop() {
  // put your main code here, to run repeatedly:
  
//sensor();
digitalWrite(RTrig, HIGH);
    digitalWrite(RTrig, LOW);
    RDur = pulseIn(REcho, HIGH);
    RDist = RDur*0.034/2;
    Serial.print("RIGHT:");
    Serial.print(RDist);
    Serial.print("cm | ");
  
    //
    digitalWrite(FTrig, HIGH);
    digitalWrite(FTrig, LOW);
    FDur = pulseIn(FEcho, HIGH);
    FDist = FDur*0.034/2;
    Serial.print("FOWARD:");
    Serial.print(FDist);
    Serial.print("cm | ");
    //
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
//void sensor() {
    /*digitalWrite(RTrig, HIGH); - this doesn't work arduino doesn't like to run things simultaineously 
    digitalWrite(FTrig, HIGH);
    digitalWrite(LTrig, HIGH);
    delay(0.1);
    //
    digitalWrite(RTrig, LOW);
    digitalWrite(FTrig, LOW);
    digitalWrite(LTrig, LOW);
    //
    RDur = pulseIn(REcho, HIGH);
    FDur = pulseIn(FEcho, HIGH);
    LDur = pulseIn(LEcho, HIGH);
    //
    RDist = RDur*0.034/2;
    FDist = FDur*0.034/2;
    LDist = LDur*0.034/2;
    //
    Serial.print("RIGHT:");
    Serial.print(RDist);
    Serial.print("cm | ");

    Serial.print("FOWARD:");
    Serial.print(FDist);
    Serial.print("cm | ");
    //
    Serial.print("LEFT:");
    Serial.print(LDist);
    Serial.print("cm | ");
    Serial.println();
    //
    
    digitalWrite(RTrig, HIGH);
    digitalWrite(RTrig, LOW);
    RDur = pulseIn(REcho, HIGH);
    RDist = RDur*0.034/2;
    Serial.print("RIGHT:");
    Serial.print(RDist);
    Serial.print("cm | ");
  
    //
    digitalWrite(FTrig, HIGH);
    digitalWrite(FTrig, LOW);
    FDur = pulseIn(FEcho, HIGH);
    FDist = FDur*0.034/2;
    Serial.print("FOWARD:");
    Serial.print(FDist);
    Serial.print("cm | ");
    //
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
 */
