//10class_object_input.cpp
#include<iostream>
using namespace std;

class Person
{
	public:
	int age;	
};

int main()
{
	Person obj;
	
	cout<<"Enter age:\n";
	cin>>obj.age;
	cout<<"age = "<<obj.age;
	return 0;
}