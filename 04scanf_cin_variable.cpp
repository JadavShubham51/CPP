//04scanf_cin_variable.cpp
#include<iostream>
using namespace std;

int main()
{
	int number=12;
	float number2 = -12.34;
	char ch = 'a';
	
	double num;
	
	cout<<"Enter any number:"<<endl;
	cin>>num; //scanf("%lf",&num);
	cout<<"num = "<<num<<endl; //printf("%lf",num);
	
	cout<<"number = "<<number<<endl<<"number2 = "<<number2<<endl<<"ch = "<<ch;
	return 0;
}
