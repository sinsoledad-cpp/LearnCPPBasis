#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
template<class NameType, class AgeType = int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name " << this->m_Name << " age " << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
void test01()
{
	Person<string, int>p1("ËïÎò¿Õ", 99);
	p1.showPerson();
}
void test02()
{
	Person<string>p1("Îò¿Õ", 99);
	p1.showPerson();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}