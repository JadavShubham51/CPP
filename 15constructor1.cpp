//constuctor_example.cpp
#include<iostream>
using namespace std;

class A
{
	public:
		void test()
		{
			cout<<"this is test function"<<endl;
		}
		
		A()
		{
			cout<<"This is constructor..!"<<endl;
		}
 
};

int main()
{
	A obj;
	obj.test();
	return 0;	
} 