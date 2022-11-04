//09class_object3_scope_resolution_op.cpp
#include<iostream>
using namespace std;

class Person
{
	public:
	int age=23;
		
};

int main()
{
	Person obj;
	cout<<obj.Person::age; // :: => scope resolution op
	
	return 0;
}