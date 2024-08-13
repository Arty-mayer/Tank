 #pragma once;
 #include <Arduino.h>
 #include "Timer.h"

 class Button {

  public:

  Button(byte pin, bool mode);
  
  void buttonListener ();
  void speedyMode (bool mode);
  bool btnState ();
  void setDebPause(unsigned int time);

private: 
byte  pin;
bool state;
bool timerKey;
bool speedy;
Timer debouncerTimer = Timer (30);

 };