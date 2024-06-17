#include <iostream>
#include<string>
using namespace std;
void func()
{
	cout << "func的调用" << endl;
}
void func(int a){
	cout << "func(int a)的调用" << endl;
}
int main()
{
	func();
	func(3);
	system("pause");
	return 0;
}