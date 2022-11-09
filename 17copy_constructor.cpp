//17copy_constructor.cpp
#include<iostream>
using namespace std;

class A
{
	public:
	int value;
	
	A(int x)
	{
		value=x;
		cout<<"this is value= "<<value<<endl;
		
	}
	
	A(A &test) // copy constructor
	{
		cout<<"copy of x = "<<test.value<<endl;
	}
	
	
};

int main()
{
	A obj(10);
	A cpy_obj(obj); // copy from parametrized using

	return 0;
}