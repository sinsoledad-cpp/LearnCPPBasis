#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class AbstractDrinking
{
public:
	virtual void Boll() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;
	void makeDrink()
	{
		Boll();
		Brew();
		PourInCup();
		PutSomething();

	}

};
class Coffee :public AbstractDrinking
{
public:
	virtual void Boll()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�忧��" << endl;
	}
	virtual void PourInCuo()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
	//delete abs;
}
void test01()
{
	doWork(new Coffee);
}
int main()
{
	test01();
	system("pause");
	return 0;
}