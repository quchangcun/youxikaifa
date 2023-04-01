#include "CountObdect.h"

int CountObdect::count_ = 0; //静态成员的定义性声明

CountObdect::CountObdect()
{
	++count_;
}

CountObdect::~CountObdect()
{
	--count_;
}

int CountObdect::GetCount()
{
	return count_;
}



