#include "Clock.h"
#include <iostream>

using namespace std;

void Clock::Display()
{
	cout << hour_ << ":" << minute_ << ":" << second_ << endl;
}

void Clock::Init(int hour,int minute,int second)
{
	hour_ = hour;
	minute_ = minute;
	second_ = second;
}

