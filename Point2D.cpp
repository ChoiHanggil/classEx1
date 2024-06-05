#include "Point2D.h"
#include<iostream>

void Point2D::SetXY(int x, int y)
{
	mX = x;
	mY = y;
}

void Point2D::GetXY(int& x, int& y) const
{
	x = mX;
	y = mY;
}

void Point2D::Print() const
{
	std::cout << "(" << mX << ", " << mY << ")" << std::endl;
}

float Point2D::Distance() const
{
	return sqrt(pow((float)mX,2) + pow((float)mY,2));
}
