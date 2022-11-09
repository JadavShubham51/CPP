//22bank_with_inheritance.cpp
#include<iostream>
using namespace std;

class Bank
{
	protected:
		int atmPin;
		int balance =3445.53;
		
	public:
		int accNum = 234325;
		string Bankname = "SBI";
		string BankIFSC = "SBIN00743";
};

class user1 : public Bank
{
	public:
		
		void getAtmPin(int pin)
		{
			atmPin = pin;
		}
		
		void disply()
		{
			cout<<atmPin<<endl<<"Welcome user1..!"<<endl;
			
		}
};

class user2 : public Bank
{
		public:
		
		void getAtmPin(int pin)
		{
			atmPin = pin;
		}
		
		void disply()
		{
			cout<<atmPin<<endl<<"Welcome user2..!"<<endl;
			
		}
	
}; 


int main()
{
	Bank b;
	
	user1 u1;
	user2 u2;
	
	int atmPin1=1234;
	cout<<"enter your atmpin:";
	cin>>atmPin1;
	
	if(atmPin1== 1234)
	{
		u1.getAtmPin(atmPin1);
		u1.disply();
	}
	else
	{
	cout<<"invalid PIN..!"<<endl;
	}
	//
	
	int atmPin2=5678;
	cout<<"enter your atmpin:";
	cin>>atmPin2;
	
	if(atmPin2== 5678)
	{
		u2.getAtmPin(atmPin2);
		u2.disply();
	}
	else
	{
		cout<<"invalid PIN..!";
	}
	
	return 0;
}