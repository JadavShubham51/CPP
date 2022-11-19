//42function_template.cpp
#include<iostream>
using namespace std;

template<typename Manan>

Manan test(Manan x)
{
	cout<<x<<endl;
	
	return x;
}

int main()
{
	test(10);
	test(10.567);
	test<int>('M'); //ASCII Value
	test("Hello");
	return 0;
}