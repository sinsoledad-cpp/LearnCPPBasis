#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	////空指针  0~225为系统占用空间
	//int *p0 = NULL;

	////野指针
	//int *p1 = (int*)0x11100;

	//const
	int a = 10;
	int b = 10;
	//1.常量指针
	const int *p2 = &a;
	p2 = &b;
	//*p2 = 20;//err
	//2.指针常量
	int *const p3 = &a;
	*p3 = 20;
	//p3 = &b;//err
	//3.
	const int *const p4 = &a;
	//*p4 = 100;//err
	//p4 = &b;//err
	system("pause");
	return 0;
}