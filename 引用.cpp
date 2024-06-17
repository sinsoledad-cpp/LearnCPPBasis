#include <iostream>
#include<string>
using namespace std;
void swap(int &n, int &m){
	int temp = n;
	n = m;
	m = temp;
}
int main()
{
	int a = 10;
	int &b = a;
	cout << a << endl;
	cout << b << endl;
	b = 100;
	cout << a << endl;
	cout << b << endl;

	int n = 10;
	int m = 20;
	swap(n, m);
	cout << n << endl;
	cout << m << endl;


	system("pause");
	return 0;
}