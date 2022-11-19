//45function_overloading.cpp

#include<iostream>
using namespace std;

void test(int x,int y)
{
	cout<<x+y<<endl;
}

void test(double p,float q)
{
	cout<<p+q<<endl;
}

int main()
{
	test(10,10);
	test(20.10,30.45);
	return 0;
}