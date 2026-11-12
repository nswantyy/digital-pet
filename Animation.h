#pragma once
#include <chrono> //for time secuds, milisecunds
#include<thread> // for pauses
#include <windows.h>
class Animation {
public:
	Animation() {}
	void happyFace();
	void sleepyFace();
	void hungryFace();
	void lowEnergy();
};