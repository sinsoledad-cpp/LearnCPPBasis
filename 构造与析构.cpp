#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
public:
	//��ͨ����
	Person()//Ĭ��
	{
		cout << "Person �޲ι��캯���ĵ���" << endl;
	}
	Person(int a)//�в�
	{
		age = a;
		cout << "Person �вι��캯���ĵ���" << endl;
	}
	//��������
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person �������캯���ĵ���" << endl;
	}
	//����
	~Person()
	{
		cout << "~Person ���������ĵ���" << endl;
	}
	int age;
};

void test01()
{
	//���ŷ�
	//Person p1;//Ĭ�Ϻ���
	//Person p2(10);//�вκ���
	//Person p3(p2);//�������캯��
	//cout << "p2������" << p2.age << endl;
	//cout << "p3������" << p3.age << endl;

	//��ʾ��
	//Person p1;//Ĭ�Ϻ���
	//Person p2 = Person(10);//�вκ���
	//Person p3 = Person(p2);//�������캯��
	
	//��ʽת����
	//Person p4 = 10;//�вκ���
	//Person p5 = p4;//�������캯��

}

int main()
{
	test01();
	//Person m;
	system("pause");
	return 0;
}