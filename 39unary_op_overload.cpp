//39unary_op_overload.cpp
/*
Operator Overloading:

++
Syntax: 

		void operator ++()
		{
		
		
		
		}
*/
#include<iostream>
using namespace std;

class Overload_Unary
{
	private:
	int value;
	public:
	
	void setValue(int v)
	{
		value=v;
	}
	
	void operator ++()
	{
		++value;
	}
	
	void displayValue()
	{
		cout<<value<<endl;
		
	}
};

int main()
{
	Overload_Unary obj,obj1;
	obj.setValue(10);
	++obj;
	obj.displayValue();
	return 0;
}