//18destuctor.cpp
/*
destructor: used to release memory occupied by constructor

Rules:
	1. destructor cant take parameters
	*/
/*	
	Encapsulation:
		
		to bind data-members(variables) and member-functions(Functions)
		enclosed in a unit
		
		this concept is Encapsulation
		
		==> data hiding/security
		
*/	

#include<iostream>
using namespace std;

class A
{
	public:
		~A()
		{
			cout<<"This is destructor"<<endl;
		}
//		A()
//		{
//			cout<<"this is constructor"<<endl;
//		}
};

int main()
{
	A obj;
	return 0;
}