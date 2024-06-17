#include<iostream>
#include<string>

using namespace std;
void isIn(class Cricle &c,class Point &p);

class Point
{
public:
	void setX(int x)
	{
		X = x;
	}
	int getX()
	{
		return X;
	}
	void setY(int y)
	{
		Y = y;
	}
	int getY()
	{
		return Y;
	}

private:
	int X;
	int Y;
};
class Cricle
{
public:
	void setR(int r)
	{
		R = r;
	}
	int getR()
	{
		return R;
	}
	void setCenter(Point center)
	{
		Center = center;
	}
	Point getCenter()
	{
		return Center;
	}
private:
	int R;
	Point Center;
};



int main()
{
	Cricle c;
	c.setR(10);

	Point center;
	center.setX(10);
	center.setY(0);

	c.setCenter(center);
	
	Point p;
	p.setX(10);
	p.setY(10);

	isIn(c, p);
	system("pause");
	return 0;
}
void isIn(Cricle &c, Point &p)
{
	int distance =
		(c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + 
		(c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
	int rdistance = c.getR()*c.getR();
	cout << distance << endl;
	cout << rdistance << endl;

	if (distance == rdistance)
	{
		cout << "ÉÏ" << endl;
	}
	else if (distance > rdistance)
	{
		cout << "Íâ" << endl;
	}
	else{
		cout << "ÄÚ" << endl;
	}

	return;
}