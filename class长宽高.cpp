#include <iostream>
#include<string>
using namespace std;

class Cube
{
public:
	//长宽高
	void setL(int l)
	{
		L = l;
	}
	int getL()
	{
		return L;
	}
	void setW(int w)
	{
		W = w;
	}
	int getW()
	{
		return W;
	}
	void setH(int h)
	{
		H = h;
	}
	int getH()
	{
		return H;
	}
	//体积
	int calculateS()
	{
		return 2 * (L*W + L*H + W*H);
	}
	int calculateV()
	{
		return L*W*H;
	}

	bool isSameByClass(Cube &c)
	{
		if (H == c.getH() && W == c.getW() && L == c.getL())
		{
			return true;
		}
		return false;
	}

private:

	int L;
	int W;
	int H;

};

bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getH() == c2.getH() && c1.getW() == c2.getW() && c1.getL() == c2.getL())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	//int a = 0;
	//cin >> a;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);
	cout << c1.calculateS() << "\t" << c1.calculateV() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	

	bool ret = isSame(c1, c2);
	//bool ret = c1.isSameByClass(c2);
	if (ret)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	system("pause");
	return 0;
}