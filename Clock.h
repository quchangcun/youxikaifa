//#pragma once

#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock
{
public:
	Clock(int hour = 0, int minute = 0,int second = 0);
	~Clock();
	void Display();
	/*void Init(int hour,int minute,int second);*/
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


