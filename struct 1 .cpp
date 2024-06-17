#include <iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
	string sname;
	int score;
};
struct teacher
{
	string tname;
	student sarray[5];
};
void allcate(teacher tarray[],int len)
{
	string nameseed = "ABCDE";
	for (unsigned int i = 0; i < len; i++)
	{
		tarray[i].tname = "teacher_";
		tarray[i].tname += nameseed[i];
		for (unsigned int j = 0; j < 5; j++)
		{
			tarray[i].sarray[j].sname = "student_";
			tarray[i].sarray[j].sname += nameseed[j];
			int random = rand() % 61 + 41;
			tarray[i].sarray[j].score = random;
		}
	}
}
void printfout(teacher tarray[], int len)
{
	for (unsigned int i = 0; i < len; i++)
	{
		cout << tarray[i].tname << endl;
		for (unsigned int j = 0; j < 5; j++)
		{
			cout << tarray[i].sarray[j].sname << "\t"
				<< tarray[i].sarray[j].score << endl;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	teacher tarray[3];
	int len = sizeof(tarray) / sizeof(tarray[0]);
	allcate(tarray, len);
	printfout(tarray, len);
	system("pause");
	return 0;
}