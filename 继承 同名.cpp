#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base func()" << endl;
	}
	void func(int a)
	{
		cout << "Base func(int)" << endl;
	}
	int m_A;
};
class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son func()" << endl;
	}
	int m_A;
};
void test01()
{
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
}
void test02()
{
	Son c;
	c.func();

	c.Base::func();
	c.Base::func(10);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}