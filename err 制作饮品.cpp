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
		cout << "ÖóÅ©·òÉ½Èª" << endl;
	}
	virtual void PourInCup()
	{
		cout << "³å¿§·È" << endl;
	}
	virtual void PourInCuo()
	{
		cout << "µ¹Èë±­×Ó" << endl;
	}
	virtual void PutSomething()
	{
		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
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