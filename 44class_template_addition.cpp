//44class_template_addition.cpp
#include<iostream>
using namespace std;

template<class shubham>
class Addition
{
	private:
		shubham num1,num2;
	public:
		shubham addNums(int n1,int n2)
		{
			num1=n1;
			num2=n2;
			
			cout<<"Sum of numbers = "<<num1+num2<<endl;
			return num1+num2;
		}
};

int main()
{
	Addition <int>a1;
	Addition <float>a2;
	a1.addNums(10,20);
	a2.addNums(20.67,45.29);
	return 0;
}