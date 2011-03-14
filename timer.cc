#include "timer.h"

Timer::Timer ()
{
	fFps = 0;
	fFpsCounter = 0;
	fFrameInterval = 0;
	fFrameTime = 0;
	fLastFrameTime = 0;
	fCurrentTime = 0;
}

Timer::~Timer ()
{

}

void Timer::CalculateFrameRate()
{
	fCurrentTime = (float)SDL_GetTicks()/1000;
	
	fFrameInterval = fCurrentTime - fFrameTime;
	
	fFrameTime = fCurrentTime;
	
	++fFpsCounter;

	if(fCurrentTime - fLastFrameTime > 1.0) 
	{
		fLastFrameTime = fCurrentTime;

		fFps = fFpsCounter;

		fFpsCounter = 0;
	}
}
