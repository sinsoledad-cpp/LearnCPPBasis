#include <iostream>
#include<string>
using namespace std;
void showValue(const int &a){
	//a = 1000;//eer
	cout << a << endl;
}
int main()
{
	const int &ref = 10;
	cout << ref << endl;
	//ref = 20;//eer
	 
	int a = 100;
	showValue(a);


	system("pause");
	return 0;
}