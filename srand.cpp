#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int n = rand() % 100;
	cout << n << endl;
	system("pause");
	return 0;
}