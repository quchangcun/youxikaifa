#include "CountObdect.h"

int CountObdect::count_ = 0; //��̬��Ա�Ķ���������

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



