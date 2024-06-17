#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "ÕÅÈý" << endl;
	ofs << "ÄÐ" << endl;
	ofs << "18" << endl;
	ofs.close();
}
void test02()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "defeat" << endl;
		return;
	}
	//1
	char buf1[1024] = { 0 };
	while (ifs >> buf1)
	{
		cout << buf1 << endl;
	}
	//2
	char buf2[1024] = { 0 };
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}
	//3
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}
	//4
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}