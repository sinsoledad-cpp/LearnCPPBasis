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
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}
void test02()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 3);
	}
	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
	reverse(vTarget.begin(), vTarget.end());
	for_each(vTarget.begin(), vTarget.end(), myPrint);
	cout << endl;
}
int main()
{
	srand((unsigned int)time(NULL));
	//test01();
	test02();
	system("pause");
	return 0;
}