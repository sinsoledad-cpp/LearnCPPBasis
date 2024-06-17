#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->name = name;
		this->age = age;
	}
	void showPerson()
	{
		cout << "ÐÕÃû" << this->name << "ÄêÁä" << this->age << endl;
	}
	T1 name;
	T2 age;
};
void printfPerson1(Person<string, int>&p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int>p("ËïÎò¿Õ", 10);
	printfPerson1(p);
}

template < class T1, class T2>
void printfPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	cout << typeid(T1).name() << endl;
	cout << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int>p("Öí°Ë½ä", 10);
	printfPerson2(p);
}
template<class T>
void printfPerson3(T &p)
{
	p.showPerson();
	cout << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int>p("ÌÆÉ®", 10); 
	printfPerson3(p);
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}