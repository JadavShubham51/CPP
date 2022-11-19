// Write a program to find the max number from given two numbers using 
//friend function

#include<iostream>
using namespace std;

class Number
{
	int a,b;
	public:
		void value(int i,int j)
		{
			a=i;
			b=j;
		}
	friend void max(Number n);
};

void max(Number n)
{
	if(n.a>n.b)
	{
		cout<<"a is grather than A now  value is"<<n.a<<endl;
	}
	else
	{
		cout<<"b is grather than a now B value is="<<n.b<<endl;
	}
}

int main()
{
	Number n;
	int a,b;
	cout<<"enter your a :";
	cin>>a;
	cout<<"enter your b :";
	cin>>b;
	n.value(a,b);
	max(n);
	return 0;
}