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
	friend void swap(Number n);
};

void swap(Number n)
{
	n.a=n.a+n.b;
	n.b=n.a-n.b;
	n.a=n.a-n.b;
	cout<<"a = "<<n.a<<" b ="<<n.b<<endl;
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
	swap(n);

	return 0;
}