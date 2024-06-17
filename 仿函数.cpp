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
void test01()
{
	plus<int>a;
	cout << a(2, 4) << endl;
	minus<int>b;
	cout << b(3, 1) << endl;
	multiplies<int>c;
	cout << c(2, 5) << endl;
	divides<int>d;
	cout << d(6, 3) << endl;
	modulus<int>e;//取模
	cout << e(10, 3) << endl;
	negate<int>n;//取反
	cout << n(5) << endl;
}
class Mycompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
/*
equal_to<T>			=
not_equal_to<T>		!=
greater<T>			>
greater_equal<T>	>=
less<T>				<
less_equal<T>		<=
*/
void test02()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	//sort(v.begin(), v.end(), Mycompare());
	sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
/*
logical_and<T>		与
logical_or<T>		或
logical_not<T>		非
*/
void test03()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
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