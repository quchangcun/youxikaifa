//#pragma once

#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock
{
public:
	void Display();
	void Init(int hour,int minute,int second);
	void Update();
	int Gethour();
	int Getminute();
	int Getsecond();
	void Sethour(int hour);
	void Setminute(int minute);
	void Setsecond(int second);
private:
	int hour_;
	int minute_;
	int second_;
};

#endif


