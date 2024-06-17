#include <iostream>
#include<string>
using namespace std;

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;

	}
	string getName()
	{
		return m_Name;
	}
	void setAge(int age)
	{
		if (age<0 || age>150)
		{
			m_Age = 0;
			cout << "err" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge()
	{
		return m_Age;
	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}
private:
	string m_Name;
	int m_Age;
	string m_Lover;
};

int main()
{
	Person p;
	p.setName("ÕÅÈý");
	cout << p.getName() << endl;
	p.setLover("²Ô¾®");
	p.setAge(100);
	cout << p.getAge() << endl;
	
	system("pause");
	return 0;
}