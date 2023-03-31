#ifndef _Harmony_H
#define _Harmony_H

class Harmony
{
public:
	int Add(int a, int b)
	{
		return a + b;
	}
	//void Init();
	//void Init(int x);
	//void Init(int x,int y);
	//void Init(int x,int y,int z);
	void Display();

	void Init(int x = 0,int y=0,int z=0);

private:
	int x_;
	int y_;
	int z_;

};

class Testdd
{
public:
	Testdd();  //如果不提供构造函数，系统将为我们提供一个不带参数的默认构造函数；
	explicit Testdd(int num);
	void Display();

	Testdd(const Testdd& other);//引用传递不分配内存，不会出现递归传递

	Testdd& operator = (const Testdd& other);

	~Testdd();

private:
	int num__;

};


#endif




