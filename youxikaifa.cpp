#include <iostream>
using namespace std;

int num = 100;

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

	int a[30];
	int* p2 = new int[30];
	p2 = a;
	for (int i = 0; i < 29; i++)
	{
		a[i] = i + 3;
		cout << a[i] << endl;
	}

	return 0;
}
