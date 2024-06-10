#include<iostream>

class MyClass
{
public:
	int mX;
	float mY;

	//Constructir(생성자)
	//기본 생성자 MyClass() = default;
	MyClass() = default;
	MyClass(int x, int y)
	{
		mX = x;
		mY = y;
	}
	//Destructor(소멸자)
	~MyClass()
	{
	}
	
	//POD : Plain Old Data;
	//C언어의 타입 (int, float...)과 구조체는 POD입니다.
};
//-------------------------------------------------------
class Mouse
{
private:
	int mPrice;
	int mDpi;

public:
	Mouse()
	{
		mPrice = mDpi = 0;
	}
	Mouse(int price, int dpi = 100)
	{
		mPrice = price;
		mDpi = dpi;
	}
};
//-------------------------------------------------

//멤버 초기화 목록(member initialize list)
class Keyboard
{
private:
	int mPrice;
	int mKeys;
	const int mType;

public:
	//멤버 초기화 목록 - <생성자> :  <초기화식1>, <초기화식2>...
	Keyboard(int price, int keys, int type) : 
		mPrice(price), mKeys(keys), mType(type)
		//멤버 순서 대로 초기화
	{
	}
	//대리 생성자
	Keyboard() :
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
//-----------------------------------------
	Mouse m1{}; // uniform initialization(생성자를 부르는 식)
	Mouse m2(100,300);
	Mouse m3(100);
//--------------------------------------
}