#include <iostream>
#include<string>
using namespace std;
void func()
{
	cout << "func�ĵ���" << endl;
}
void func(int a){
	cout << "func(int a)�ĵ���" << endl;
}
int main()
{
	func();
	func(3);
	system("pause");
	return 0;
}