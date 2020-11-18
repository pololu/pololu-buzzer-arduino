# PololuBuzzer library for Arduino

Version: 1.1.0<br/>
Release date: 2020-11-18<br/>
[www.pololu.com](http://www.pololu.com/)

## Summary

This is a C++ library for the Arduino IDE that allows you to play notes and songs on a buzzer.  This library was made in order to support programmable boards from Pololu that feature a buzzer, so it does not offer any choice for where the buzzer is connected.  For boards based on the ATmega328P, this library uses Timer 2 and pin 3 (PD3/OC2B).  For boards based on the ATmega32U4, this library uses Timer 4 and pin 6 (PD7/OC4D).  This library will conflict will other libraries that use the same timer or pin.

This library is not meant to be used on its own.  It should be installed as a dependency of other libraries specific to the board you are programming, such as the [AStar32U4 library](https://github.com/pololu/a-star-32u4-arduino-library) and the [Zumo32U4 library](https://github.com/pololu/zumo-32u4-arduino-library) (or it might be bundled with some of those libraries instead).

## Version history

* 1.1.0 (2020-11-18): Reorganized files to work with Arduino library manager.
* 1.0.1 (2016-10-12): Fixed a bug that caused the `isPlaying` method to malfunction sometimes when link time optimization is enabled.
* 1.0.0 (2014-12-11): Original release.