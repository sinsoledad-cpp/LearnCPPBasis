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
		cout << "Phone构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	string m_PName;
};
class Person
{
public:
	//初始化
	Person(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person构造函数调用" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	string m_Name;
	Phone m_Phone;
};
void test01()
{
	Person p("张三","苹果MAX");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}