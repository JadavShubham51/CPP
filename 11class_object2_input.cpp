//11class_object2_input.cpp
#include<iostream>
using namespace std;

class Person
{
	private:
	int age;
	
	public:
	void getAge(int setAge)
	{
		age = setAge;
		cout<<age<<endl;
	}
};

int main()
{
	//without parameter
//	Person obj;
//	cout<<"Enter any age:"<<endl;
//	obj.getAge(76);	
	
//	scanf to input using parameter
	Person obj;
	int anyAge;
	cout<<"Enter any age:"<<endl;
	cin>>anyAge;
	obj.getAge(anyAge);
	
	return 0;
}