#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal" << endl;
	}
	virtual void speak() = 0;
	//virtual~Animal()
	//{
	//	cout << "~Animal" << endl; 
	//}
	virtual ~Animal() = 0;

};
Animal:: ~Animal()
{
	cout << "Animal纯析构" << endl;
}

class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat()" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}
	virtual~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "~Cat()" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;
};

void test01()
{
	Animal*animal = new Cat("Tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();

	system("pause");
	return 0;
}