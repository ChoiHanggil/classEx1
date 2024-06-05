#include<iostream>
#include "Point2D.h"


int main()
{
	Point2D p1;
	Point2D p2;
	p1.SetXY(2, 2);
	p2.SetXY(4, 3);
	int x1, y1;
	int x2, y2;
	p1.GetXY(x1, y1);
	p2.GetXY(x2, y2);
	std::cout << "P1 : " << x1 << ", " << y1<< std::endl;
	std::cout << "P2 : " << x2 << ", " << y2 << std::endl;

	p1.Print();
	p2.Print();
	std::cout << "P1 �������� ���� ��ġ������ �Ÿ� : " << p1.Distance() << std::endl;
	std::cout << "P2 �������� ���� ��ġ������ �Ÿ� : " << p2.Distance() << std::endl;
}