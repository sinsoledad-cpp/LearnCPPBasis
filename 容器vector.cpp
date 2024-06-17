#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);
	vector<int>v3(10, 100);
	printVector(v3);
	vector<int>v4(v3);
	printVector(v4);
}
void test02()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2;
	v2 = v1;
	printVector(v2);
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);
	vector<int>(v4);
	v4.assign(10, 100);
	printVector(v4);
}
void test03()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	if (v1.empty())
	{
		cout << "space" << endl;
	}
	else
	{
		cout << "no space" << endl;
		cout << "capacity " << v1.capacity() << endl;
		cout << "size " << v1.size() << endl;
	}
	v1.resize(15, 0);
	printVector(v1);
	v1.resize(25, 100);
	printVector(v1);
	v1.resize(5);
	printVector(v1);
}
void test04()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);
	v1.pop_back();
	printVector(v1);
	v1.insert(v1.begin(), 100);
	printVector(v1);
	v1.insert(v1.begin(), 2, 1000);
	printVector(v1);
	v1.erase(v1.begin());
	printVector(v1);
	v1.erase(v1.begin(), v1.end());
	printVector(v1);
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	v1.clear();
	printVector(v1);
}
void test05()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	for (unsigned int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	cout << v1.front() << endl;
	cout << v1.back() << endl;
}
void test06()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	vector<int>v2;
	for (int i = 9; i >= 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}
void test07()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "capacity " << v.capacity() << endl;
	cout << "size " << v.size() << endl;
	v.resize(3);
	cout << "capacity " << v.capacity() << endl;
	cout << "size " << v.size() << endl;
	vector<int>(v).swap(v);
	cout << "capacity " << v.capacity() << endl;
	cout << "size " << v.size() << endl;
}
void test08()
{
	vector<int>v;
	int num = 0;
	v.reserve(100000);
	int *p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num " << num << endl;
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	test08();
	system("pause");
	return 0;
}