# PololuBuzzer library for Arduino

## Summary

This is a C++ library for the Arduino IDE that allows you to make beeps and simple musical tunes on a speaker/buzzer connected to an output pin of the microcontroller.  Tone sequences are represented with a musical notation similar to the GW-BASIC PLAY command, and they play in the background, using interrupts.  To save RAM, songs can be read directly from program memory.

This library was made in order to support programmable boards from Pololu that feature a buzzer, so it does not currently offer any choice for where the speaker is connected.  For boards based on the ATmega328P, this library uses Timer 2 and pin 3 (PD3/OC2B).  For boards based on the ATmega32U4, this library uses Timer 4 and pin 6 (PD7/OC4D).  This library will conflict will other libraries that use the same timer or pin.

This library can be used on its own, but it is usually installed as a dependency of other libraries specific to the board you are programming, such as the [AStar32U4 library](https://github.com/pololu/a-star-32u4-arduino-library) and the [Zumo32U4 library](https://github.com/pololu/zumo-32u4-arduino-library) (or it might be bundled with some of those libraries instead).

## Example Usage

```cpp
#include <PololuBuzzer.h>

PololuBuzzer buzzer;

void setup()
{
  buzzer.play(F("l8 cdefgab>c"));
}
```

## Version history

* 1.2.0 (2020-12-03): Added support for `__FlashStringHelper` strings; moved code into `src/`; optimzed ATmega32U4 calculations; fixed minor bug that caused some frequencies to fail; CI testing.
* 1.1.0 (2020-11-18): Reorganized files to work with Arduino library manager.
* 1.0.1 (2016-10-12): Fixed a bug that caused the `isPlaying` method to malfunction sometimes when link time optimization is enabled.
* 1.0.0 (2014-12-11): Original release.
