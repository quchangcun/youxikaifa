#ifndef _CountObdect_H
#define _CountObdect_H


class CountObdect
{
public:
	CountObdect();
	~CountObdect();
	static int GetCount();
private:
	static int count_; // 静态成员的引用型说明

};

#endif




