//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;

class Addstring
{
	char c1[50],c2[50];
	
	public:
		Addstring(char str1[],char str2[])
		{
			strcpy(c1, str1);
      		strcpy(c2, str2);
		}
		
		void operator +()
		{
			cout<<"\n conacatenation: "<< strcat(c1,c2);
		}
	
};

int main()
{
	
	char str1[50] ;
	char str2[50] ;
	
	cout<<"enter your first sitring"<<endl;
	cin>>str1;
	cout<<"enter your second sitring"<<endl;
	cin>>str2;
	
	Addstring a1(str1,str2);
	
	+a1;
	return 0;
}