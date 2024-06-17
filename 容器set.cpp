#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<set>
using namespace std;
void printSet(const set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	printSet(s1);
	set<int>s2(s1);
	printSet(s2);
	set<int>s3;
	s3 = s2;
	printSet(s3);
}
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);
	if (s1.empty())
	{
		cout << "space" << endl;
	}
	else
	{
		cout << "no space" << endl;
		cout << "size " << s1.size() << endl;
	}
	set<int>s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);
	printSet(s1);
	printSet(s2);
	cout << "swap" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}
void test03()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);
	s1.erase(s1.begin());
	printSet(s1);
	s1.erase(30);
	printSet(s1);
	s1.clear();
	//s1.erase(s1.begin(), s1.end());
	printSet(s1);

}
void test04()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);
	set<int>::iterator pos = s1.find(30);
	if (pos != s1.end())
	{
		cout << "find " << endl;
	}
	else
	{
		cout << "no find" << endl;
	}
	int num = s1.count(30);
	cout << "num " << num << endl;
}
void test05()
{
	set<int>s;
	pair<set<int>::iterator, bool>ret = s.insert(10);
	if (ret.second)
	{
		cout << "first vectory" << endl;
	}
	else
	{
		cout << "first defeat" << endl;
	}
	ret = s.insert(10);
	if (ret.second)
	{
		cout << "first vectory" << endl;
	}
	else
	{
		cout << "first defeat" << endl;
	}
	multiset<int>ms;
	ms.insert(10);
	ms.insert(30);
	ms.insert(20);
	ms.insert(10);
	ms.insert(20);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test06()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	printSet(s1);
	set<int, MyCompare>s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(50);
	s2.insert(30);
	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class ComparePerson
{
public:
	bool operator()(const Person &p1, const Person &p2)
	{
		return p1.m_Age < p2.m_Age;
	}
};
void test07()
{
	set<Person, ComparePerson>s;
	Person p1("Áõ±¸", 24);
	Person p2("¹ØÓğ", 28);
	Person p3("ÕÅ·É", 25);
	Person p4("ÕÔÔÆ", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, ComparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << endl;
	}
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();
	system("pause");
	return 0;
}