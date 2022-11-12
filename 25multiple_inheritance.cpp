//25multiple_inheritance.cpp
#include<iostream>
using namespace std;

class Father 
{
	public:
	void f_method()
	{
		cout<<"Father"<<endl;
	}
};

class Mother
{
	public:
	void M_method()
	{
		cout <<"mother"<<endl;
	}
	
	Mother()
	{
		cout<<"test_constructor"<<endl;
		}	
};

class Son : public Father, public Mother
{
	public:
		Son()
		{
			cout<<"Son"<<endl;			
		}
};

int main()
{
	
	Son obj;
	obj.f_method();
	obj.M_method();
	
	return 0;
}