#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;

	}
	Person(int age)
	{
		cout << "Person�вι��캯������" << endl;
		m_age = age;
	}
	Person(const Person &p)
	{

		m_age = p.m_age; 
		cout << "Person�������캯������" << endl;
	}
	~Person()
	{
		cout << "~Person������������" << endl;

	}
	int m_age;
};
//1,ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2������" << p2.m_age << endl;
}
//2,ֵ���ݵķ�ʽ��������������
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}
//3��ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = doWork2();
	cout << (int*)&p << endl;

}

int main()
{

	//test01();
	//test02();
	test03();

	system("pause");
	return 0;
}