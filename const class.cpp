#include<iostream>
#include<iomanip>
using namespace std;
class Person
{
public:
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;//err
		//this = NULL;//err
	}
public:
	int m_A;
	mutable int m_B;
};
void test01()
{
	Person p;
	p.showPerson;
	
}
void test02()
{
	const Person p;
	//p.m_A = 100;//eer
	p.m_B = 100;
}
int main()
{


	
	system("pause");
	return 0;
}