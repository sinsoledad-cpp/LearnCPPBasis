#include <iostream>
#include<string>
using namespace std;
struct hero
{
	string name;
	int age;
	string sex;
};
void bubblesort(hero heroarray[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroarray[j].age>heroarray[j + 1].age)
			{
				hero temp = heroarray[j];
				heroarray[j] = heroarray[j + 1];
				heroarray[j + 1] = temp;
			}
		}
	}
}
int main()
{
	hero heroarray[5] = {
		{ "����", 23, "��" },
		{ "����", 22, "��" },
		{ "�ŷ�", 20, "��" },
		{ "����", 21, "��" },
		{ "����", 19, "Ů" }
	};
	int len = sizeof(heroarray) / sizeof(heroarray[0]);
	bubblesort(heroarray, len);
	for (int i = 0; i < 5; i++){
		cout << heroarray[i].name << "\t"
			<< heroarray[i].age << "\t"
			<< heroarray[i].sex << endl;
	}
	system("pause");
	return 0;
}