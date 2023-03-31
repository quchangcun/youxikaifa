#include "COPYCLASS.h"
//#include <string.h>
#include <cstring>
#include <iostream>


using namespace std;



String::String(char* str/* = */)
{
	str_ = AllocAndCpy(str);

	//int len = strlen(str) + 1;
	//str_ = new char[len];
	//memset(str_, 0, len);
	//strcpy(str_, str);
}

String& String::operator=(const String& other)
{
	if (this == &other)
		return *this;

	delete[] str_;
	str_ = AllocAndCpy(other.str_);
	return *this;
}

String ::~String()
{
	delete[] str_;
}

String::String(const String& other) /*:str_(other.str_)*/     //“¿»ª ««≥øΩ±¥
{
	str_ = AllocAndCpy(other.str_);

	//int len = strlen(other.str_) + 1;
	//str_ = new char[len];
	//memset(str_, 0, len);
	//strcpy(str_, other.str_);
}

char* String::AllocAndCpy(char* str)
{
	int len = strlen(str) + 1;
	char* temp = new char[len];
	memset(temp, 0, len);
	strcpy(temp, str);
	return temp;
}

void String::Display()
{
	cout << str_ << endl;
}

