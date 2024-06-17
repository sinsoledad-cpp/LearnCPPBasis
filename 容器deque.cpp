#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>

using namespace std;
void printDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int>d2(d1.begin(), d1.end());
	printDeque(d2);
	deque<int>d3(10, 100);
	printDeque(d3);
	deque<int>d4(d3);
	printDeque(d4);

}
void test02()
{
	deque<int>d1;
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	deque<int>d2;
	d2 = d1;
	printDeque(d2);
	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);
	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);

}
void test03()
{
	deque<int>d1;
	for (int i = 1; i <= 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	if (d1.empty())
	{
		cout << "space" << endl;
	}
	else
	{
		cout << "no space" << endl;
		cout << "size " << d1.size() << endl;
	}
	d1.resize(12);
	printDeque(d1);
	d1.resize(15, 1);
	printDeque(d1);
	d1.resize(5);
	printDeque(d1);
}
void test04()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	printDeque(d1);
	d1.push_front(100);
	d1.push_front(200);
	printDeque(d1);
	d1.pop_back();
	printDeque(d1);
	d1.pop_front();
	printDeque(d1);
	d1.push_front(200);
	d1.push_back(20);
	printDeque(d1);
	d1.insert(d1.begin(), 1000);
	printDeque(d1);
	d1.insert(d1.begin(), 2, 10000);
	printDeque(d1);
	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	printDeque(d1);

	//d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);

}
void test05()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	for (unsigned int i = 0; i < d.size(); i++)
	{
		cout << d[i] << "¡¡";
	}
	cout << endl;
	for (unsigned int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << "¡¡";
	}
	cout << endl;
	cout << "first " << d.front() << endl;
	cout << "last " << d.back() << endl;
}
void test06()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);
	sort(d.begin(), d.end());
	printDeque(d);
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return 0;
}