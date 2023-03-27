#ifndef _B_H_
#define _B_H_

class A; //前向声明

class B
{
public:

	A *a; //前向声明的类不能实例化
};

#endif 

