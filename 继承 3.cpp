#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;
		m_B = 10;
		//m_C = 10;//err
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//err
}
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//err
	}
};
void test02()
{
	Son2 s2;
	//s2.m_A = 1000;//err
	//s2.m_B = 1000;//err
}
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;

};
class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//err
	}
};
void test03()
{
	Son3 s3;
	//s3.m_A = 100;//err
	//s3.m_B = 100;//err
}
int main()
{
	
	system("pause");
	return 0;
}