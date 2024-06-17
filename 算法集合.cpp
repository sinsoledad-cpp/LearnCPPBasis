#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<numeric>
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
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vector<int>vTarget1;
	vTarget1.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itEnd1 = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget1.begin());
	for_each(vTarget1.begin(), itEnd1, myprint());
	cout << endl;

	vector<int>vTarget2;
	vTarget2.resize(v1.size() + v2.size());
	vector<int>::iterator itEnd2 = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget2.begin());
	for_each(vTarget2.begin(), itEnd2, myprint());
	cout << endl;

	vector<int>vTarget3;
	vTarget3.resize(max(v1.size(), v2.size()));
	vector<int>::iterator itEnd3 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget3.begin());
	for_each(vTarget3.begin(), itEnd3, myprint());
	cout << endl;

	vector<int>vTarget4;
	vTarget4.resize(max(v1.size(), v2.size()));
	vector<int>::iterator itEnd4 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget4.begin());
	for_each(vTarget4.begin(), itEnd4, myprint());
	cout << endl;
}
int main()
{
	test01();
	
	system("pause");
	return 0;
}