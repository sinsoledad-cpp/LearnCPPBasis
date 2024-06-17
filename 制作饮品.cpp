#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void Brew()
	{
		cout << "�忧��" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
class Tea :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "��ˮ" << endl;
	}
	void Brew()
	{
		cout << "�Ӳ�" << endl;
	}
	void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	void PutSomething()
	{
		cout << "����" << endl;
	}
};
void doWork(AbstractDrinking*abc)
{
	abc->makeDrink();
	delete abc;
}
void test01()
{
	doWork(new Coffee);
	cout << endl;
	doWork(new Tea);
}
int main()
{
	test01();
	system("pause");
	return 0;
}