#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class Person1
{
public:
	void showPerson1()
	{
		cout << "Person 1 show" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "Person 2 show" << endl;
	}
};
template<class T>
class Myclass
{
public:
	T obj;
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};
void test01()
{
	Myclass<Person1>m;
	m.func1();
	//m.func2();//err
}

int main()
{
	test01();

	system("pause");
	return 0;
}