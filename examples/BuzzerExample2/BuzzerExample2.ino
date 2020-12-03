// Simple example to demonstrate playing music using the Arduino Environment's
// flash helper macro F().  This is usually the most efficient and convenient
// way to play musical sequences.

#include <PololuBuzzer.h>

PololuBuzzer buzzer;

void setup()
{
  buzzer.play(F("l8 cdefgab>c"));
}

void loop()
{
}
