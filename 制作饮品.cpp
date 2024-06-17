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
		cout << "ÖóÅ©·òÉ½Èª" << endl;
	}
	virtual void Brew()
	{
		cout << "³å¿§·È" << endl;
	}
	virtual void PourInCup()
	{
		cout << "µ¹Èë±­×Ó" << endl;
	}
	virtual void PutSomething()
	{
		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
	}
};
class Tea :public AbstractDrinking
{
public:
	void Boil()
	{
		cout << "ÖóË®" << endl;
	}
	void Brew()
	{
		cout << "¼Ó²è" << endl;
	}
	void PourInCup()
	{
		cout << "µ¹Èë±­×Ó" << endl;
	}
	void PutSomething()
	{
		cout << "ÄûÃÊ" << endl;
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