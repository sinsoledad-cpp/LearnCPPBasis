#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册" << endl;
	}
	void footer()
	{
		cout << "帮助中心" << endl;
	}
	void left()
	{
		cout << "Java，python，c++" << endl;
	}
};
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};
void test01()
{
	Java ja;
	ja.header();
	ja.left();
	ja.content();
	ja.footer();
	Python py;
	py.header();
	py.left();
	py.content();
	py.footer();
	CPP cpp;
	cpp.header();
	cpp.left();
	cpp.content();
	cpp.footer();


}
int main()
{
	test01();

	system("pause");
	return 0;
}