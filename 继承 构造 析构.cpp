#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base���캯��" << endl;
	}
	~Base()
	{
		cout << "~Base��������" << endl;
	}
};
class Son :public Base
{
public:
	Son()
	{
		cout << "Son���캯��" << endl;
	}
	~Son()
	{
		cout << "~Son��������" << endl;
	}
};

void test01()
{
	//Base bl;
	Son s1;
}
int main()
{
	test01();
	system("pause");
	return 0;
}