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
void myPrint(int val)
{
	cout << val << " ";
}
class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>v2;
	v2.resize(v1.size());

	copy(v1.begin(), v1.end(), v2.begin());

	for_each(v2.begin(), v2.end(), myPrint);
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint());
	cout << endl;
}
class great30
{
public:
	bool operator()(int val)
	{
		return val > 30;
	}
};
void test02()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(20);
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
	replace_if(v.begin(), v.end(), great30(), 3000);
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
}
void test03()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 3);
	}
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint());
	cout << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), myprint());
	cout << endl;
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}