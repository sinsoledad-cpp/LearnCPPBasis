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
		cout << "static void func����" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;
private:
	static void func02()
	{
		cout << "static void func2�ĵ���" << endl;
	}
};
void test01()
{
	//1,ͨ���������
	Person p;
	p.func();
	//2,ͨ����������
	Person::func();
	//Person::func2();//err

}
int main()
{
	test01();

	
	system("pause");
	return 0;
}