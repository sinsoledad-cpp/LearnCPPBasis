#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
struct teacher
{
	string name;
	int age;
	struct student stu;
};
void printfteacher(const teacher *p)
{
	cout << p->age << "\t"
		<< p->name << "\t"
		<< p->stu.age << "\t"
		<< p->stu.name << "\t"
		<< p->stu.score << endl;
}
int main()
{
	//struct teacher t;
	teacher t = { "张三", 28, "李四", 18, 99 };
	 
	printfteacher(&t);

	system("pause");
	return 0;
}