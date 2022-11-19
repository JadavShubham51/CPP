#include<iostream>
using namespace std;

class Addtion
{
	public:
		Addtion(int a,int b)
		{
			cout<<"Addtion of"<<a<<" and "<<b<<" is ="<<a+b<<endl;
		}
	
};

class sub
{
	public:
		sub(int a,int b)
		{
			cout<<"subtraction of"<<a<<" and "<<b<<" is ="<<a-b<<endl;
		}
	
};

class mul
{
	public:
		mul(int a,int b)
		{
			cout<<"multipliction of"<<a<<" and "<<b<<" is ="<<a*b<<endl;
		}
	
};

class Div
{
	public:
		Div(int a,int b)
		{
			cout<<"division of"<<a<<" and "<<b<<" is "<<a/b<<endl;
		}
	
};

int main()
{
	
	int a,b;
	cout<<"enter your a and b"<<endl;
	cin>>a>>b;
	Addtion ob(a,b);
	sub obj(a,b);
	mul obje(a,b);
	
	Div o(a,b);
	
	return 0;
}