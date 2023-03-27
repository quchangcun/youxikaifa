#include <iostream>
#include "Clock.h"
#include "test.h"
#include "Harmony.h"

using namespace std;

void fun(int a, int b)
{
	cout << "int fun" << endl;
}
void fun(double a, double b)
{
	cout << "double fun" << endl;
}

//不进行名字改编
#ifdef _cplusplus
extern "C"
{
#endif
	void fun(int a)
	{
		cout << "xxxx" << endl;
	}
	void fun1(double a)
	{
		cout << "yyyy" << endl;
	}
#ifdef _cplusplus
}
#endif

int function(int a, int b = 5)
{
	cout << "sum:" << a + b << endl;
	return(a + b);
}
int function(int a, int b, int c ,int d = 10)
{
	cout << "sum:" << a + b + c + d << endl;
	return(a + b + c + d);
}

int num = 100;

struct Test123
{
	int x_;
	int y_;
	int z_;
	void Init(int x, int y, int z)
	{
		x_ = x;
		y_ = y;
		z_ = z;
	}
	void Display()
	{
		cout << "x=" << x_ << "  y=" << y_ << "  z=" << z_ << endl;
	}
};

class TESTEE
{
public:
	int x_;
	int y_;
	int z_;
	void Init(int x, int y, int z)
	{
		x_ = x;
		y_ = y;
		z_ = z;
	}
	void Display()
	{
		cout << "x=" << x_ << "  y=" << y_ << "  z=" << z_ << endl;
	}
};

int main()
{
	int num = 30;
	cout << num << endl;
	cout << ::num << endl;
	cout << endl;

	int* p = new int(520);
	cout << *p << endl;
	delete p;

	cout << endl;

	//int a[30];
	int* p2 = new int[30];
	//p2 = a;
	//for (int i = 0; i < 29; i++)
	//{
		//a[i] = i + 3;
		//cout << a[i] << endl;
	//}
	delete[] p2;

	fun(3, 4);
	fun(3.3, 4.4);
	fun(3);
	fun1(5.5);

	function(3);
	function(3, 6);

	int var = 100;
	int& reval = var;
	cout << reval << endl;
	cout << var << endl;

	reval = 200;
	cout << reval << endl;
	cout << var << endl;

	int var2 = 500;
	reval = var2;
	cout << var << endl;

	const int vae = 1024;
	const int& vak = vae;
	cout << vak << endl;
	cout << vae << endl;

	//int& vav = vae;   //常量不能进行更改
	//vak = 200;        //常量不能进行赋值
	int vb = 200;
	const int& hub = vb;
	//hub = 300;        //const值不能更改
	cout << hub << endl;
	
	double hug = 3.14;
	const int& hugy = hug;
	cout << hug << endl;
	cout << hugy << endl;


	Clock nowclock;
	nowclock.Init(11, 06, 56);
	nowclock.Display();
	nowclock.Update();
	nowclock.Display();

	nowclock.Sethour(15);
	nowclock.Setminute(48);
	nowclock.Setsecond(24);
	nowclock.Display();
	nowclock.Gethour();
	nowclock.Getminute();
	nowclock.Getsecond();

	for (int i = 0; i < 60; i++)
	{
		nowclock.Update();
		nowclock.Display();
	}

	Test test;
	test.Init();
	test.Display();

	test.Init(5);
	test.Display();

	test.Init(5, 6);
	test.Display();

	test.Init(8, 9, 10);
	test.Display();

	test.Init(0, 5, 0);
	test.Display();

	Harmony harmony;
	harmony.Init();
	harmony.Display();

	harmony.Init(10);
	harmony.Display();

	harmony.Init(50,20);
	harmony.Display();

	Test123 t;
	//t.Init(10,20,30);
	t = {10,20,30};
	t.Display();

	TESTEE testee;
	//testee.Init(15,30,45);
	testee = {15,30,45};
	testee.Display();


	return 0;
}
