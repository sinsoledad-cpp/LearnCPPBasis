#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��" << endl;
	}
	void footer()
	{
		cout << "��������" << endl;
	}
	void left()
	{
		cout << "Java��python��c++" << endl;
	}
};
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
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