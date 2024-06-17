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
#include<ctime>
using namespace std;
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 5) << endl;
}
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	int count;
};
void test02()
{
	MyPrint myPrint;
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	myPrint("hello world");
	cout << "count " << myPrint.count << endl;
}
void doPrint(MyPrint &mp, string test)
{
	mp(test);
}
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello c++");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}