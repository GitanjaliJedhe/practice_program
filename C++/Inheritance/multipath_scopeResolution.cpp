#include <iostream>

using namespace std;

class A
{
	public:
		int a;
};

class B : public A
{
	public:
		int b;
};

class C : public A
{
	public:
		int c;
};

class D : public B, public C
{
	public:
		int d;
};

int main()
{
	D obj;

	obj.B::a = 10;

	obj.C::a = 100;
	
	obj.b = 20;
	obj.c = 30;
	obj.d = 40;

	cout<<"class B a = "<<obj.B::a<<endl;
	cout<<"class C a = "<<obj.C::a<<endl;
	cout<<"b = "<<obj.b<<endl;
	cout<<"c = "<<obj.c<<endl;
	cout<<"d = "<<obj.d<<endl;

	return 0;
}
