#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<deque>
#include<queue>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	queue<Person>q;
	Person p1("ÌÆÉ®", 30);
	Person p2("ËïÎò¿Õ", 1000);
	Person p3("Öí°Ë½ä", 900);
	Person p4("É³É®", 800);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "size " << q.size() << endl;
	while (!q.empty())
	{
		cout << "name " << q.front().m_name << "age " << q.front().m_age << endl;
		cout << "name " << q.back().m_name << "age " << q.back().m_age << endl;
		q.pop();
	}
	cout << "size " << q.size() << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}