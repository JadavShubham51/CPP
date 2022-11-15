//29switch_do_while.cpp
#include<iostream>
using namespace std;

int main()
{
	int choice;
	char ch;
	do{
		cout<<"Enter your choice:"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1: cout<<"1"<<endl;
			break;
			case 2: cout<<"2"<<endl;
			break;
			case 3: cout<<"3"<<endl;
			break;
			default:
				cout<<"invalid number"<<endl;
		}
		cout<<"Do you want to continue?(Y/N)"<<endl;
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	
	return 0;
}