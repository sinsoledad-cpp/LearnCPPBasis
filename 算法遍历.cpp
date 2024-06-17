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
void print01(int val)
{
	cout << val << " ";
}
class print02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), print01);
	cout << endl;
	for_each(v.begin(), v.end(), print02());
	cout << endl;
}
class Transform
{
public:
	int operator()(int v)
	{
		v += 100;
		return v;
	}
};
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;
	vTarget.resize(v.size());
	transform(v.begin(), v.end(), vTarget.begin(), Transform());
	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}