#include <iostream>
#include<string>
using namespace std;
//学生结构体
struct student
{
	string sname;
	int score;
};
//老师结构体，里面嵌套学生结构体
struct teacher
{
	string tname;
	student sarray[5];
};
//输入
void allcate(teacher tarray[], int len)
{
	//名字种子
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		//老师名字输入
		tarray[i].tname = "teacher_";
		tarray[i].tname += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			//学生名字输入
			tarray[i].sarray[j].sname = "student_";
			tarray[i].sarray[j].sname += nameseed[j];
			//学生分数输入
			tarray[i].sarray[j].score = 60;
		}
	}
}
//打印
void printfout(teacher tarray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tarray[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << tarray[i].sarray[j].sname << "\t"
				<< tarray[i].sarray[j].score << endl;
		}
	}
}
int main()
{
	teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	//调用输入函数
	allcate(tarray, len);
	//调用打印函数
	printfout(tarray, len);
	system("pause");
	return 0;
}