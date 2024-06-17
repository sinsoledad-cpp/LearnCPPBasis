#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
template<class T1, class T2 >
class Person;

template<class T1, class T2>
void printPerson2(Person<T1, T2>p)
{
	cout << p.m_Name << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	friend void printPerson(Person<T1, T2>p)
	{
		cout << p.m_Name << p.m_Age << endl;
	}
	friend void printPerson2<>(Person<T1, T2>p);
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};
void test01()
{
	Person<string, int>p("tom", 20);
	printPerson(p);
}
void test02()
{
	Person<string, int>p("Jerry", 20);
	printPerson2(p);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}