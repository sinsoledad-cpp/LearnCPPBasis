#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
template<typename T>
void my_Swaq(T &m, T &n)
{
	T temp = m;
	m = n;
	n = temp;
}
int main()
{
	int a1 = 1;
	int b1 = 2;
	my_Swaq(a1, b1);
	//my_Swaq<int>(a1, b1);
	cout << a1 << " " << b1 << endl;

	double a2 = 1.0;
	double b2 = 2.0;
	my_Swaq(a2, b2);
	//my_Swaq<double>(a2, b2);
	cout << a2 << " " << b2 << endl;
	printf("%f ", a2);
	printf("%f\n", b2);

	system("pause");
	return 0;
}