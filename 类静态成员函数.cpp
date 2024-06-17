#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
public:
	static void func()
	{
		m_A = 100;
		//m_B = 200;//err
		cout << "static void func调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;
private:
	static void func02()
	{
		cout << "static void func2的调用" << endl;
	}
};
void test01()
{
	//1,通过对象访问
	Person p;
	p.func();
	//2,通过类名访问
	Person::func();
	//Person::func2();//err

}
int main()
{
	test01();

	
	system("pause");
	return 0;
}