#include<iostream>
#include<iomanip>
using namespace std;

class Person
{
public:
	//普通构造
	Person()//默认
	{
		cout << "Person 无参构造函数的调用" << endl;
	}
	Person(int a)//有参
	{
		age = a;
		cout << "Person 有参构造函数的调用" << endl;
	}
	//拷贝构造
	Person(const Person &p)
	{
		age = p.age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}
	//解析
	~Person()
	{
		cout << "~Person 解析函数的调用" << endl;
	}
	int age;
};

void test01()
{
	//括号法
	//Person p1;//默认函数
	//Person p2(10);//有参函数
	//Person p3(p2);//拷贝构造函数
	//cout << "p2的年龄" << p2.age << endl;
	//cout << "p3的年龄" << p3.age << endl;

	//显示法
	//Person p1;//默认函数
	//Person p2 = Person(10);//有参函数
	//Person p3 = Person(p2);//拷贝构造函数
	
	//隐式转换法
	//Person p4 = 10;//有参函数
	//Person p5 = p4;//拷贝构造函数

}

int main()
{
	test01();
	//Person m;
	system("pause");
	return 0;
}