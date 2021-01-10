//Ensure only loaded once
#ifndef DBH1Controller_h
#define DBH1Controller_h

#include "Arduino.h"

class DBH1Controller{
	public:
		DBH1Controller(byte in1, byte in2, byte en, byte ct, byte poti);
        void setSpeedRange(int minSpeed, int maxSpeed);
        void setPotiRange(int minPos, int maxPos);
        void moveForward(bool smooth = false);
        void moveBackward(bool smooth = false);
        void moveToPos(int Pos, bool smooth = false);
        int getCurrent();
        int getPos();
    
    private:
        int calcSpeed();
};

#endif		