//12class_object_getfunctions.cpp
#include<iostream>
using namespace std;

class GetFunctions
{
	public:
	void test()
	{
		cout<<"test function"<<endl;
	}
};

void test123()
{
	cout<<"this is test123"<<endl;
}

int main()
{
	GetFunctions obj;
	test123();// fist way to access function from a class
	obj.GetFunctions::test(); // second way to access function from a class
}