//hirachical_inheritance.cpp
#include<iostream>
using namespace std;

class A
{
	public:
	void getA()	
	{
		cout<<"class of A"<<endl;
	}
};

class B :virtual public A
{
	public:
	void getB()
	{
		cout<<"class of B"<<endl;	
	}	
};

class D : public B,virtual public A
{
	public:
	void getD()
	{
		cout<<"class of D"<<endl;
	}
};

class E : public B
{
	public:
		void getE()
		{
			cout<<"class of E"<<endl;
		}
};

class C : public A
{
	public:
	void getC()
	{
		cout<<"class of C"<<endl;
		}	
};

class F : public C
{
	public:
	void getF()
	{
		cout<<"class of F"<<endl;
	}	
};

class G : public C
{
	public:
	void getG()
	{
		cout<<"class of G"<<endl;
	}
};

int main()
{
	D Do;
	E Eo;
	F Fo;
	G Go;
	
	Do.getA();
	Do.getB();
	Do.getD();
	Eo.getE();
	Eo.getB();
	Eo.getA();
	Fo.getF();
	Fo.getC();
	Go.getG();
	Go.getA();

	return 0;
}