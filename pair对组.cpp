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
void test01()
{
	pair<string, int>p("Tom", 20);
	cout << p.first << " " << p.second << endl;
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << p2.first << " " << p2.second << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}