//头文件
//Person.hpp
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;
};
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << this->m_Name << this->m_Age << endl;
}
//源文件
//draft.cpp
#include"Person.hpp"
void test01()
{
	Person<string, int>p("jerry", 18);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}







//头文件
//Person.h
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 m_Name;
	T2 m_Age;
};
//源文件
//draft.cpp
#include"Person.cpp"
void test01()
{
	Person<string, int>p("jerry", 18);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
//Person.cpp
#include"Person.h"
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << this->m_Name << this->m_Age << endl;
}
