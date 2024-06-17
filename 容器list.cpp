#include<iostream>
#include<list>
using namespace std;
void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	list<int>L2(L1.begin(), L1.end());
	printList(L2);
	list<int>L3(L2);
	printList(L3);
	list<int>L4(10, 1000);
	printList(L4);
}
void test02()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	list<int>L2;
	L2 = L1;
	printList(L2);
	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);
	list<int>L4;
	L4.assign(10, 100);
	printList(L4);
}
void test03()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);
	if (L1.empty())
	{
		cout << "space " << endl;
	}
	else
	{
		cout << "no space " << endl;
		cout << "size " << L1.size() << endl;
	}
	L1.resize(6);
	printList(L1);
	L1.resize(10, 10000);
	printList(L1);
	L1.resize(2);
	printList(L1);

}
void test04()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);
	printList(L);
	L.pop_back();
	printList(L);
	L.pop_front();
	printList(L);
	L.insert(L.begin(), 1000);
	printList(L);
	list<int>::iterator it = L.begin();
	L.insert(++it, 2000);
	printList(L);
	it = L.begin();
	//L.erase(it);
	//printList(L);
	L.erase(++it);
	printList(L);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	printList(L);
	L.remove(10000);
	printList(L);
}
void test05()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//L1[0];//err
	//L1.at(0);//err
	cout << "first " << L1.front() << endl;
	cout << "last " << L1.back() << endl;
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it = it + 1;//err
}
bool myCompare(int v1, int v2)
{
	//
	return v1 > v2;
}
void test06()
{
	list<int>L1;
	L1.push_back(40);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(10);
	cout << "front  ";
	printList(L1);
	cout << "back  ";
	L1.reverse();
	printList(L1);
	//sort(L1.begin(), L1.end());
	cout << "sort rise  ";
	L1.sort();
	printList(L1);
	cout << "sort drop  ";
	L1.sort(myCompare);
	printList(L1);
}
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};
bool ComparePerson(Person &p1, Person &p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}
void test07()
{
	list<Person>L;
	Person p1("¡ı±∏", 35, 175);
	Person p2("≤‹≤Ÿ", 45, 180);
	Person p3("ÀÔ»®", 40, 170);
	Person p4("’‘‘∆", 25, 190);
	Person p5("’≈∑…", 35, 160);
	Person p6("πÿ”", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << " name " << (*it).m_Name << " nage " << it->m_Age << " height " << it->m_Height << endl;
	}
	cout << endl;
	L.sort(ComparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << " name " << (*it).m_Name << " age " << it->m_Age << " height " << it->m_Height << endl;
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