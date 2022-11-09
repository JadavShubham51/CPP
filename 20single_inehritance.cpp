//20single_inehritance.cpp
#include<iostream>
using namespace std;

class A
{
	public:
	void getA()
	{
		cout<<"Class A"<<endl;
	}
	
		
};

class B : public A
{
	public:
	void getB()
	{
		cout<<"Class B"<<endl;
	}	
};

int main()
{
//	A obj;
//	obj.getA(); this is simple type
	B obje;
	obje.getA();
	obje.getB();
	return 0;
}