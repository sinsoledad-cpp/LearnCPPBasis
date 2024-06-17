#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;
};

int main()
{
	Person p1;
	p1.m_Name = "李四";
	//p1.m_car = "奔驰";//err
	//p1.m_Password=123;//err


	p1.func();

	system("pause");
	return 0;
}