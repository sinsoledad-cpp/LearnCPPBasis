#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;
};

int main()
{
	Person p1;
	p1.m_Name = "����";
	//p1.m_car = "����";//err
	//p1.m_Password=123;//err


	p1.func();

	system("pause");
	return 0;
}