//16parametrized_constructor.cpp
#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"Simple constructor..!"<<endl;
		}
		A(int x)
		{
			cout<<"x ="<<x<<endl;//12
		}
		
		A(int age,string name)
		{
			cout<<"age ="<<age<<endl<<"name = "<<name<<endl;
		}
};

int main()
{
	A obje,obj(12),obj1(21,"shubham");
	return 0;
}