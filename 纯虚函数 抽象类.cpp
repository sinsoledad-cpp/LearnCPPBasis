#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Base
{
public:
	virtual void func() = 0;
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout << "funcº¯Êý" << endl;
	}
};
void test01()
{
	Base *base = new Son;
	base->func();
	Son s;
	s.func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}