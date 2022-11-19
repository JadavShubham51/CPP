//40binary_op_overload.cpp
/*
Operator Overloading:

+ (binary op)


*/

#include<iostream>
using namespace std;

class op_overload
{
	private:
		int value;
	public:
		void setValue(int v)
		{
			value=v;
		}
	
	op_overload operator +(op_overload x)
	{
		op_overload res;
		res.value = value+x.value;
		
		return res;
	}
	
	void display()
	{
		cout<<value<<endl;
		
	}
};

int main()
{
	op_overload ob1,ob2,ob3,ob4,ob5,ob6,ob7,ob8,ob9;
	ob1.setValue(10);
	ob2.setValue(20);
	ob3.setValue(30);
	ob5.setValue(50);
	ob6.setValue(20);
	ob7.setValue(10);
	
	ob4 = ob1+ob2+ob3;
	ob8 = ob5+ob6+ob7;
	
	ob9 = ob4+ob8;
	ob9.display();
	return 0;
}