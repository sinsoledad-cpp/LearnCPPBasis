#include <iostream>
#include<string>
using namespace std;
int* func()
{
	int *p = new int(10);
	return p;
}
void test01()
{
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
}
void test02()
{
	int *arr = new int[10];
	for (int i = 0; i < 10; i++){
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	delete[] arr;
}
int main()
{

	//在堆区开辟数据
	//int *p = func();
	test01();
	test02();
	system("pause");
	return 0;
}
