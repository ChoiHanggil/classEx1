#include<iostream>

class MyClass
{
public:
	int mX;
	float mY;

	//Constructir(������)
	MyClass(int x, int y)
	{
		mX = x;
		mY = y;
	}
	//Destructor(�Ҹ���)
	~MyClass()
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

}