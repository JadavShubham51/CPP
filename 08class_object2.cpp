//08class_object2.cpp
#include<iostream>
using namespace std;

class Person
{
	private:
	int age=43;
	
	public:
	void getaAge()
	{
		cout<<age<<endl;	
	}	
};

int main()
{
	Person obj;
	obj.getaAge();
	return 0;
}