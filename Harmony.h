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
	Testdd();  //������ṩ���캯����ϵͳ��Ϊ�����ṩһ������������Ĭ�Ϲ��캯����
	explicit Testdd(int num);
	void Display();

	Testdd(const Testdd& other);//���ô��ݲ������ڴ棬������ֵݹ鴫��

	Testdd& operator = (const Testdd& other);

	~Testdd();

private:
	int num__;

};


#endif




