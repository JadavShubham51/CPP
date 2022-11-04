//05_ 1 to 10 numbers.cpp
#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}
	
	cout<<"this is a Even number:\n";
	for(int i=1;i<=10;i++)
	{
		if(i% 2== 0)
		{
			cout<<i<<endl;
		}
	}

	cout<<"this is a odd number:\n";
	for(int i=1;i<=10;i++)
	{
		if(i%2 != 0)
		{
			cout<<i<<endl;
		}
	}

	return 0;
}