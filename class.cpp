#include <iostream>
#include<string>
using namespace std;

class Student
{
public:
	void showStudent()
	{
		cout << "����" << m_Name << "\t";
		cout << "ѧ��" << m_ID << endl;
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
	s1.m_Name = "����";
	s1.m_ID = 1;

	s1.showStudent();
	
	Student s2;
	s2.setName("����");
	s2.setID(3);
	s2.showStudent();

	system("pause");
	return 0;
}