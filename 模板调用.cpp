#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
void myPrintf(int a, int b)
{
	cout << "��ͨ" << endl;
}
template<typename T>
void myPrintf(T a, T b)
{
	cout << "ģ��" << endl;
}
template<typename T>
void myPrintf(T a, T b, T c)
{
	cout << "ģ��" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	myPrintf(a, b);
	myPrintf<>(a, b);
	myPrintf(a, b, 100);
	char a1 = 'a';
	char b1 = 'b';
	myPrintf(a1, b1);
	myPrintf<char>(a1, b1);

}
int main()
{
	test01();
	system("pause");
	return 0;
}