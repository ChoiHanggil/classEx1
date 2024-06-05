#pragma once
class Point2D
{
private:
	int mX;
	int mY;

public:
	void SetXY(int x, int y);
	void GetXY(int& x, int& y) const;
	void Print() const;
	float Distance()const;
};