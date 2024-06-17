#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	ofstream ofs;// ("person", ios::out | ios::binary);
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "уехЩ", 18 };
	ofs.write((const char *)&p, sizeof(Person));
	ofs.close();
}
void test02()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "defeat" << endl;
		return;
	}
	Person p1;
	ifs.read((char *)&p1, sizeof(Person));
	cout << p1.m_Name << endl;
	cout << p1.m_Age << endl;
	ifs.close();
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}