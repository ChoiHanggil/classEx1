#include<iostream>

class MyClass
{
public:
	int mX;
	float mY;

	//Constructir(������)
	//�⺻ ������ MyClass() = default;
	MyClass() = default;
	MyClass(int x, int y)
	{
		mX = x;
		mY = y;
	}
	//Destructor(�Ҹ���)
	~MyClass()
	{
	}
	
	//POD : Plain Old Data;
	//C����� Ÿ�� (int, float...)�� ����ü�� POD�Դϴ�.
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

//��� �ʱ�ȭ ���(member initialize list)
class Keyboard
{
private:
	int mPrice;
	int mKeys;
	const int mType;

public:
	//��� �ʱ�ȭ ��� - <������> :  <�ʱ�ȭ��1>, <�ʱ�ȭ��2>...
	Keyboard(int price, int keys, int type) : 
		mPrice(price), mKeys(keys), mType(type)
		//��� ���� ��� �ʱ�ȭ
	{
	}
	//�븮 ������
	Keyboard() :
	{
	}
};
int main()
{
	//������ ����� ����
	int myVariable;
	myVariable = 1;

	//�ʱ�ȭ
	float myFloat = 1.1f;
	double myDouble{ 2.0 };

	//�ν���Ʈ �������ʱ�ȭ
	MyClass p = MyClass(1, 1);
	MyClass p2(2, 2);
	MyClass p3{ 2, 2 };
//-----------------------------------------
	Mouse m1{}; // uniform initialization(�����ڸ� �θ��� ��)
	Mouse m2(100,300);
	Mouse m3(100);
//--------------------------------------
}