#include<iostream>
#include<iomanip>
using namespace std;

//静态变量成员
class Person
{
public:
	static int m_A;
private:
	static int m_B;

};
//类内声明，类外初始化
int Person::m_A = 100;
int Person::m_B = 100;
void test01()
{
	Person p;
	cout << p.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;

}
void test02()
{
	//1.通过对象进行访问
	//Person p;
	//cout << p.m_A << endl;

	//2.通过类名进行访问
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;//err
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}