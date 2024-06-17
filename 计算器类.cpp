#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
class SubCalculator :public AbstractCalculator
{
public:
	int SubResult()
	{
		return m_Num1 - m_Num2;
	}
};
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test02()
{
	AbstractCalculator *abc = new AddCalculator();
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->getResult() << endl;
	delete abc;
	abc = new SubCalculator();
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->getResult() << endl;
	delete abc;

}

int main()
{
	
	test02();
	system("pause");
	return 0;
}