/* 
Arduino Library for DBH-1 Motor Driver
Copyright (c) by Stefan Soldan. 
All rights reserved.

This library will assume the following pins are used by default:

	ENA (Digital pin) enable/disable motor A 
	IN1A (PWM pin) control motor A (PWM signal or LOW)
    IN2A (PWM pin) control motor A (PWM signal or LOW)
    CTA (Analog Pin) Current Draw motor A (optional)

    ENB (Digital pin) enable/disable motor B 
	IN1B (PWM pin) control motor B (PWM signal or LOW)
    IN2B (PWM pin) control motor B (PWM signal or LOW)
    CTB (Analog Pin) Current Draw motor B (optional)
	
*/

#include "DBH1Controller.h"


DBH1Controller::DBH1Controller(byte in1, byte in2, byte en, byte ct, byte poti)
{
	_in1 = in1;
    _in2 = in2,
    _en = en;
    _ct = ct;
    _poti = poti;

    pinMode(_in1, OUTPUT);
    pinMode(_in2, OUTPUT);
    pinMode(_en, OUTPUT);
    pinMode(_ct, INPUT);
    pinMode(_poti, INPUT);

    int _minSpeed = 1;
    int _maxSpeed = floor(255 * 0.98) //maximum duty cycle shouldn't be more than 98%.
}


void DBH1Controller::setSpeedRange(int minSpeed, int maxSpeed) {}

void DBH1Controller::setPotiRange(int minPos, int maxPos) {}

void DBH1Controller::moveForward(bool smooth = false) {}

void DBH1Controller::moveBackward(bool smooth = false) {}

void DBH1Controller::moveToPos(int Pos, bool smooth = false) {}
 
int DBH1Controller::getCurrent() {}

int DBH1Controller::getPos() {}

int DBH1Controller::calcSpeed() {}