//26multilevel_inheritance.cpp
#include<iostream>
using namespace std;

class A
{
	public:
	void getA()
	{
		cout<<"A"<<endl;
	}	
};

class B : public A
{
	public:
	void getB()
	{
		cout<<"B"<<endl;
	}	
};

class C : public B
{
	public:
	void getC()
	{
		cout<<"C"<<endl;
	}	
};

class D : public C
{
	public:
	void getD()
	{
		cout<<"D"<<endl;
	}	
};

int main()
{
	D obj;
	obj.getD();
	obj.getA();
	obj.getB();
	obj.getC();
	return 0;
}