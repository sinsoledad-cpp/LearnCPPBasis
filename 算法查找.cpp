#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<ctime>
using namespace std;
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end())
	{
		cout << "no find" << endl;
	}
	else
	{
		cout << "find " << *it << endl;
	}
}
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Person &p)
	{
		if (this->m_Name == p.m_Name&&this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test02()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	Person pp("bbb", 20);
	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end())
	{
		cout << "no find" << endl;
	}
	else
	{
		cout << "find " << it->m_Name << " " << it->m_Age << endl;
	}
}
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());
	if (it == v.end())
	{
		cout << "no find" << endl;
	}
	else
	{
		cout << "find" << endl;
		cout << *it << endl;
	}
}
class Greater20
{
public:
	bool operator()(Person &p)
	{
		return p.m_Age > 20;
	}
};
void test04()
{
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "no find" << endl;
	}
	else
	{
		cout << "find " << it->m_Name << " " << it->m_Age << endl;
	}
}
void test05()
{
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(0);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);
	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end())
	{
		cout << "no find repeating element" << endl;//÷ÿ∏¥
	}
	else
	{
		cout << "find repeating element" << endl;
	}
}
void test06()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//”––Ú–Ú¡–
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret)
	{
		cout << "find" << endl;
	}
	else
	{
		cout << "no find" << endl;
	}
}
class Greatersint20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test07()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	int num = count(v.begin(), v.end(), 40);
	cout << "count " << num << endl;
	int nums = count_if(v.begin(), v.end(), Greatersint20());
	cout << "count " << nums << endl;
}
class Persons
{
public:
	Persons(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	bool operator==(const Persons &p)
	{
		if (this->m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
class Greatersp20
{
public:
	bool operator()(Persons &p)
	{
		return p.m_Age > 20;
	}
};
void test08()
{
	vector<Persons>v;
	Persons p1("¡ı±∏", 24);
	Persons p2("πÿ”", 25);
	Persons p3("’≈∑…", 25);
	Persons p4("’‘‘∆", 25);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	Persons p("÷Ó∏¡¡", 25);
	int num = count(v.begin(), v.end(), p);
	cout << "count " << num << endl;
	int nums = count_if(v.begin(), v.end(), Greatersp20());
	cout << "count " << nums << endl;

}
int main()
{
	// test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	test08();
	system("pause");
	return 0;
}