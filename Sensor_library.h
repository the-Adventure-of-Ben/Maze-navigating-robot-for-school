#ifdef SENSOR_LIBRARY_H
#define SENSOR_LIBRARY_H
//
#include <Arduino.h>
//

class Sensors {
  private:

  int RTrig; // right trig and echo
  int REcho; // ""
  long RDur;
  int RDist;
  int FEcho; // forwards trig and echo
  int FTrig; // ""
  long FDur;
  int FDist;
  int LEcho; // left trig and echo
  int LTrig; // ""
  long LDur;
  int LDist;


  public:
    Sensors (int, int, long, int, int, int, long, int, int, int, long, int);
    void Lsensor();
    void Rsensor();
    void Fsensor();

};

#endif
