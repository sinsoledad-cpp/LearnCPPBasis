#include <iostream>
#include<string>
using namespace std;
int& test()
{
	static int a = 10;
	return a;
}
int main()
{
	int &ref = test(); 
	cout << ref << endl;
	cout << ref << endl;
	test() = 1000;
	cout << ref << endl;
	cout << ref << endl;
	system("pause");
	return 0;
}