#include<Wire.h>

#include "RTClib.h"

RTC_DS1307 RTC;

void setup ()

{

  Serial.begin(9600);

  Wire.begin();

  RTC.begin(); // load the time from your computer.

  if (! RTC.isrunning())

  {

    Serial.println("RTC is NOT running!");// This will reflect the time that your sketch was compiled



  }
// RTC.adjust(DateTime(23,04,04,11,48,20));
}

void loop ()

{

  DateTime now = RTC.now();

  Serial.print(now.month(), DEC);
  
  Serial.print('/');

  Serial.print(now.day(), DEC);

  Serial.print('/');

  Serial.print(now.year(), DEC);

  Serial.print(' ');

  Serial.print(now.hour(), DEC);

  Serial.print(':');

  Serial.print(now.minute(), DEC);

  Serial.print(':');

  Serial.print(now.second(), DEC);

  Serial.println();

  delay(1000);

}
