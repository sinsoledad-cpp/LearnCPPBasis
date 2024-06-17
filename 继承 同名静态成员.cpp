#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Base
{
public:
	static void func()
	{
		cout << "Base static void func()" << endl;
	}
	static int m_A;
};
int Base::m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son static void func()" << endl;
	}
};
int Son::m_A = 200;
void test01()
{
	cout << "对象" << endl;
	Son s;
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;

	cout << "类名" << endl;
	cout << Son::m_A << endl;
	cout << Son::Base::m_A << endl;

}
void test02()
{
	Son ss;
	ss.func();
	ss.Base::func();
	Son::func();
	Son::Base::func();
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}