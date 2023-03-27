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
void Clock::Update()
{
	second_++;
	if (second_ == 60)
	{
		minute_++;
		second_ = 0;
	}
	if (minute_ == 60)
	{
		hour_++;
		minute_ = 0;
	}
	if (hour_ == 24)
	{
		hour_ = 0;
	}
}

int Clock::Gethour()
{
	cout << hour_ << endl;
	return hour_;
}
int Clock::Getminute()
{
	cout << minute_ << endl;
	return minute_;
}
int Clock::Getsecond()
{
	cout << second_ << endl;
	return second_;
}

void Clock::Sethour(int hour)
{
	hour_ = hour;
}
void Clock::Setminute(int minute)
{
	minute_ = minute;
}
void Clock::Setsecond(int second)
{
	second_ = second;
}

