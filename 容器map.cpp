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
#include<map>
using namespace std;
void printMap(map<int, int> &m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << " key " << (*it).first << " value " << it->second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);
	map<int, int>m2(m);
	printMap(m2);
	map<int, int>m3;
	m3 = m2;
	printMap(m3);
	if (m.empty())
	{
		cout << "space" << endl;
	}
	else
	{
		cout << "no space" << endl;
		cout << "size " << m.size() << endl;
	}
}
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	map<int, int>m2;
	m2.insert(pair<int, int>(4, 100));
	m2.insert(pair<int, int>(5, 200));
	m2.insert(pair<int, int>(6, 300));
	printMap(m);
	cout << endl;
	printMap(m2);
	cout << endl;
	cout << endl;
	m.swap(m2);
	printMap(m);
	cout << endl;
	printMap(m2);
}
void test03()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;
	printMap(m);
	m.erase(m.begin());
	printMap(m);
	m.erase(3);
	printMap(m);
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}
void test04()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << " find " << (*pos).first << " value " << pos->second << endl;
	}
	else
	{
		cout << "no find" << endl;
	}
	int num = m.count(3);
	cout << " num " << num << endl;
}
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;

	}
};
void test05()
{
	map<int, int, MyCompare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << " key " << (*it).first << " value " << it->second << endl;
	}
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return 0;
}