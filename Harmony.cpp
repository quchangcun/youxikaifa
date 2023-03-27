#include "Harmony.h"
#include <iostream>

using namespace std;

//inline int Harmony::Add(int a, int b)
//{
//	return a + b;
//}

//void Harmony::Init()
//{
//	x_ = 0;
//	y_ = 0;
//	z_ = 0;
//}
//void Harmony::Init(int x)
//{
//	x_ = x;
//	y_ = 0;
//	z_ = 0;
//}
//void Harmony::Init(int x, int y)
//{
//	x_ = x;
//	y_ = y;
//	z_ = 0;
//}
//void Harmony::Init(int x, int y, int z)
//{
//	x_ = x;
//	y_ = y;
//	z_ = z;
//}

void Harmony::Init(int x/*=0*/, int y/*=0*/, int z/*=0*/)
{
	x_ = x;
	y_ = y;
	z_ = z;
}

void Harmony::Display()
{
	cout << "x_=" << x_ << " y_=" << y_ << " z_=" << z_ << endl;
}


