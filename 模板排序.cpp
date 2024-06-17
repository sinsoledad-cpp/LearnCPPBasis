#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
template<typename T>
void my_Swaq(T &m, T &n)
{
	T temp = m;
	m = n;
	n = temp;
}
template<typename T>
void my_Sort(T arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			my_Swaq(arr[max], arr[i]);
		}
	}
}
template<typename T>
void printfArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	char arrchar[] = "owifhkasdhfuuh";
	int len = sizeof(arrchar) / sizeof(arrchar[0]);
	my_Sort(arrchar, len);
	printfArray(arrchar, len);

}
void test02()
{
	int arr[] = { 2, 4, 5, 1, 8, 6, 4, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	my_Sort(arr, len);
	printfArray(arr, len);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}