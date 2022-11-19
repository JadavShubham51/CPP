#include<iostream>
using namespace std;

class calcu
{
	public:
	calcu(int a,int b,int c)
	{
		switch(c)
		{
			case 1: cout<<"addition of"<<a<<"and"<<b<<"="<<a+b<<endl;
			break;
			
			case 2: cout<<"subtraction of"<<a<<"and"<<b<<"="<<a-b<<endl;
			break;
			
			case 3: cout<<"multiplication of"<<a<<"and"<<b<<"="<<a*b<<endl;
			break;
			
			case 4: cout<<"division of"<<a<<"and"<<b<<"="<<a/b<<endl;		
			break;
			
			case 5: cout<<"mode of"<<a<<"and"<<b<<"="<<a%b<<endl;
			break;
			
			default:
				cout<<"enter your valid choice";
				break;
		}
	}	
};
int main()
{
	int a,b;
	int z;
	cout<<"enter your a and b:\n";
	cin>>a>>b;
	cout<<"a="<<a<<"\nb="<<b;
	cout<<"\nenter your choice:";	
	cin>>z;
	calcu x(a,b,z);
	return 0;
}