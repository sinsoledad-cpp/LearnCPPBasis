#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void Myprint02(string test)
{
	cout << test << endl;
}
void test01()
{
	MyPrint myPrint;
	myPrint("hello world");
	Myprint02("hello world");
}
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret=myadd(100, 100);
	cout << "ret=" << ret << endl;
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}