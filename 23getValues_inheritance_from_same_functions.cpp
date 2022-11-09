//23getValues_inheritance_from_same_functions.cpp
#include<iostream>
using namespace std;

class A
{
	public:
	void getA()
	{
		cout<<"class A"<<endl;
	}
};

class B : public A
{
	public:
	void getA()	
	{
		cout<<"class B"<<endl;
	}
};


int main()
{
	B obj;
	obj.A::getA(); // scope resolution oprator
	obj.getA(); // same function but differnt class
	return 0;
}