#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonAddAge(Person &p)
	{
		this->age += p.age;
		return *this;
	}
	int age;
};
void test01()
{
	Person p1(18);
	cout << "p1������Ϊ��  " << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(5);
	cout << "p2������Ϊ��  " << p2.age << endl;
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout << "p2������Ϊ��  " << p2.age << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}