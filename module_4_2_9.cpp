#include<iostream>
using namespace std;

class Overmath
{
	public:
	void math(int a,int b)
	{
		cout<<"Addition of "<<a<<" and "<<b<<" = "<<a+b<<endl;
	}
	void math(double i,double j)
	{
		cout<<"multiplication of "<<i<<" and "<<j<<" = "<<i*j<<endl;
	}
	void math(int x,double y)
	{
		cout<<"subtraction of "<<x<<" and "<<y<<" = "<<x-y<<endl;
	}
	void math(double p,int q)
	{
		cout<<"division of"<<p<<" and "<<q<<" = "<<p/q<<endl;
	}
};

int main()
{
	Overmath m;
	m.math(23,23);
	m.math(23.3,24.4);
	m.math(300,65.3);
	m.math(34.5,34);
	
	
	return 0;
}