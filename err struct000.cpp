#include <iostream>
#include<string>
using namespace std;
//ѧ���ṹ��
struct student
{
	string sname;
	int score;
};
//��ʦ�ṹ�壬����Ƕ��ѧ���ṹ��
struct teacher
{
	string tname;
	student sarray[5];
};
//����
void allcate(teacher tarray[], int len)
{
	//��������
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		//��ʦ��������
		tarray[i].tname = "teacher_";
		tarray[i].tname += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			//ѧ����������
			tarray[i].sarray[j].sname = "student_";
			tarray[i].sarray[j].sname += nameseed[j];
			//ѧ����������
			tarray[i].sarray[j].score = 60;
		}
	}
}
//��ӡ
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
	//�������뺯��
	allcate(tarray, len);
	//���ô�ӡ����
	printfout(tarray, len);
	system("pause");
	return 0;
}