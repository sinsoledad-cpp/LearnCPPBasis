#include<iostream>
#include<iomanip>
using namespace std;

//��̬������Ա
class Person
{
public:
	static int m_A;
private:
	static int m_B;

};
//���������������ʼ��
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
	//1.ͨ��������з���
	//Person p;
	//cout << p.m_A << endl;

	//2.ͨ���������з���
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