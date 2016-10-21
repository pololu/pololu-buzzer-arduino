#include <PololuBuzzer.h>

PololuBuzzer buzzer;
unsigned long speed=0;
const int speedPin=0;
const int ledPin=3;

void myPlayFrequency(unsigned int freq,unsigned int dur, 
                     unsigned char volume)
{
  long adjFreq = freq*speed/1023UL;
  long adjDur  = dur*1023UL/speed;

  // set led brightness according to adjFreq
  analogWrite(ledPin,
              constrain(map(adjFreq,27,4186,255,0),0,255));

  // play speed-adjusted note
  buzzer.defaultPlayFrequency(adjFreq,adjDur,volume);
}

void setup()
{
  buzzer.setPlayFrequency(myPlayFrequency);
  pinMode(ledPin,OUTPUT);
}

const char melody[] PROGMEM = "!L16 V8 cdefgab>cbagfedc";

void loop()
{
  speed=4*analogRead(speedPin); // up to 4x speed
  if (!buzzer.isPlaying()) 
  {
    delay(1000);
    buzzer.playFromProgramSpace(melody);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
