#include<iostream>

class MyClass
{
public:
	int mX;
	float mY;

	//Constructir(생성자)
	MyClass(int x, int y)
	{
		mX = x;
		mY = y;
	}
	//Destructor(소멸자)
	~MyClass()
	{
	}
};

int main()
{
	//변수의 선언과 정의
	int myVariable;
	myVariable = 1;

	//초기화
	float myFloat = 1.1f;
	double myDouble{ 2.0 };

	//인스턴트 생성자초기화
	MyClass p = MyClass(1, 1);
	MyClass p2(2, 2);
	MyClass p3{ 2, 2 };

}