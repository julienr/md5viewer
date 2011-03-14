#ifndef _TGTIMER_H
#define _TGTIMER_H

#include "defs.h"

class Timer
{
 public:
	Timer ();
	~Timer ();
	float GetFPS () { return fFps; }
	float GetFrameInterval () { return fFrameInterval; }
	float GetTime () { return (float)SDL_GetTicks()/1000; }
	void CalculateFrameRate ();
	
 protected:
	float fFps;
	float fFpsCounter;
	float fFrameInterval;
	float fFrameTime;
	float fLastFrameTime;
	float fCurrentTime;
};


#endif
