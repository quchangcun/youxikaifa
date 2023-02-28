//#pragma once

#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock
{
public:
	void Display();
	void Init(int hour,int minute,int second);
public:
	int hour_;
	int minute_;
	int second_;
};

#endif


