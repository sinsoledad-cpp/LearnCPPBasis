#include <iostream>
#include<string>
using namespace std;
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}
void funs(int a, int){
	cout << "funs" << endl;
}
int main()
{
	cout << func(10) << endl;
	cout << func(10,30) << endl;
	cout << func(10,30,40) << endl;
	funs(10,5);
	system("pause");
	return 0;
}