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
void test01()
{
	vector<int>v;
	for (int i = 0; i < 100; i++)
	{
		v.push_back(i);
	}
	int sum = accumulate(v.begin(), v.end(), 0);
	int sums = accumulate(v.begin(), v.end(), 100);
	cout << sum << " " << sums << endl;
}
class myprint
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
	v.resize(10);
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), myprint());
	cout << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}