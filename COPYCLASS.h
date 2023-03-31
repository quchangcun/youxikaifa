#ifndef _COPYCLASS_H
#define _COPYCLASS_H


class String
{
public:
	String(char* str = const_cast<char*>(""));
	~String();
	String(const String& other);
	String& operator = (const String& other);

	void Display();
private:
	//String(const String& other);
	//String& operator = (const String& other);
	char* AllocAndCpy(char* str);
	char* str_;
};




#endif

