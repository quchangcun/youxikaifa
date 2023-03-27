#ifndef _TEST_H
#define _TEST_H

class Test
{
public:
	//ÄÚÁªº¯Êı
	int Add(int a, int b);
	/*{
		return a + b;
	}*/
	//void Init();
	//void Init(int x);
	//void Init(int x, int y);
	//void Init(int x, int y, int z);
	void Init(int x = 0, int y = 0, int z = 0);
	void Display();
private:
	int x_;
	int y_;
	int z_;
};

#endif
