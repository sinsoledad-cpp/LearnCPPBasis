#include <iostream>
#include<string>
using namespace std;

class Student
{
public:
	void showStudent()
	{
		cout << "姓名" << m_Name << "\t";
		cout << "学号" << m_ID << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}
	void setID(int id)
	{
		m_ID = id;
	}
public:
	string m_Name;
	int m_ID;
};
int main()
{
	Student s1;
	s1.m_Name = "张三";
	s1.m_ID = 1;

	s1.showStudent();
	
	Student s2;
	s2.setName("李四");
	s2.setID(3);
	s2.showStudent();

	system("pause");
	return 0;
}