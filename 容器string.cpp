#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void test01()
{
	string s1;

	const char *str = "hello world";
	string s2(str);
	cout << "s2 " << s2 << endl;

	string s3(s2);
	cout << "s3 " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 " << s4 << endl;
	
}
void test02()
{
	string str1;
	str1 = "hello world";
	cout << "str1 " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 " << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << "str4 " << str4 << endl;

	string str5;
	str5.assign("hello C++", 5);
	cout << "str5 " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 " << str6 << endl;

	string str7;
	str7.assign(10, 'w');
	cout << "str7 " << str7 << endl;
}
void test03()
{
	string str1 = "ÎÒ";

	str1 += "°®ÍæÓÎÏ·";
	cout << "str1 " << str1 << endl;

	str1 += ':';
	cout << "str1 " << str1 << endl;

	string str2 = "LOL DNF ";
	str1 += str2;
	cout << "str1 " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 " << str3 << endl;

	str3.append("game abcde", 5);
	cout << "str3 " << str3 << endl;

	str3.append(str2);
	cout << "str3 " << str3 << endl;

	str3.append(str2, 0, 3);
	cout << "str3 " << str3 << endl;

	str3.append(str2, 3, 4);
	cout << "str3 " << str3 << endl;


}
void test04()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "space" << endl;
	}
	else
	{
		cout <<"pos "<< pos << endl;
	}
	pos = str1.rfind("de");
	if (pos == -1)
	{
		cout << "space" << endl;
	}
	else
	{
		cout << "pos " << pos << endl;
	}
}
void test05()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");
	cout << "str1 " << str1 << endl;
}
void test06()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1=str2" << endl;
	}
	else if (str1.compare(str2)>0)
	{
		cout << "str1>str2" << endl;
	}
	else
	{
		cout << "str1<str2" << endl;
	}
}
void test07()
{
	string str = "hello";
	for (unsigned int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	for (unsigned int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	str[0] = 'X';
	cout << "str " << str << endl;
	str.at(1) = 'x';
	cout << "str " << str << endl;
}
void test08()
{
	string str = "hello";
	cout << "str " << str << endl;
	str.insert(1, "111");
	cout << "str " << str << endl;
	str.erase(1,3);
	cout << "str " << str << endl;

}
void test09()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);
	cout << "subStr " << subStr << endl;
}
void test10()
{
	string email = "zhangsan@sina.com";
	int pos = email.find("@");
	cout << pos << endl;
	string usrName = email.substr(0,pos);
	cout << "usrName " << usrName << endl;
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	system("pause");
	return 0;
}