#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class Phone
{
public:
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone���캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	string m_PName;
};
class Person
{
public:
	//��ʼ��
	Person(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person���캯������" << endl;
	}
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	string m_Name;
	Phone m_Phone;
};
void test01()
{
	Person p("����","ƻ��MAX");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}