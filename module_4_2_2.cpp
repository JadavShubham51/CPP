#include<iostream>
using namespace std;

class Bank

{
	protected:
	int balance=10000;
	int accnum;
	
	public:
	string acctype;
	string name;
	
	void value( int a,string b,string c)
	{
		acctype=c;
		name=b;
		accnum=a;
		
	}
	
	void deposit(int d)
	{	
		balance=balance+d;
		
	}
	void withdraw(int e)
	{
			if(e>balance)
		{
			cout<<"balance is your not account"<<endl;
		}
		else
		{
		
		balance=balance-e;
		cout<<"withdrawal successfull"<<endl<<"Money withdrawn ="<<e<<endl;
		
	}
	}
	
	
 	void display()
	{
		cout<<"--------------------------------"<<endl<<"Here is your Account info"<<endl;
		cout<<"Name ="<<name<<endl;
	cout<<"Current Balance = "<<balance<<endl;
		}

	
};
int main()
{
	Bank obj;
	int a,i,g,d; 
	string b,c;
	cout<<"Enter account number"<<endl;
	cin>>a;
	cout<<"Enter name"<<endl;
	cin>>b;
	retry:
	cout<<"Enter account Type:"<<endl<<"Enter 0 for saving or 1 for current"<<endl;
	cin>>g;
	if(g == 0)
	{
		c="Savings";
		cout<<"You have selected savings account"<<endl;
		obj.value(a,b,c);
		int j;
		cout<<"Press 0 to deposit, 1 to withdraw and 2 to View balance"<<endl;
		cin>>i;	
		if(i==0)
		{
			cout<<"Enter amount to be deposited"<<endl;
			cin>>j;
			obj.deposit(j);
			
		}
		else if(i==1)
		{
			cout<<"Enter amount to be withdraw"<<endl;
			cin>>j;
			obj.withdraw(j);
		}
		else if(i==2)
		{
			cout<<"Here are you account details"<<endl;
			obj.display();
		}
		else
		{
			cout<<"enter valid number "<<endl;
		}
			
	}
	else if(g == 1)
	{
		c="Current";
		cout<<"You have selected current account"<<endl;
		obj.value(a,b,c);
		int i,j;
	cout<<"Press 0 to deposit, 1 to withdraw and 2 to View balance"<<endl;
	cin>>i;	
	if(i==0)
	{
		cout<<"Enter amount to be deposited"<<endl;
		cin>>j;
		obj.deposit(j);
		
	}
	else if(i==1)
	{
		cout<<"Enter amount to be withdraw"<<endl;
		cin>>j;
		obj.withdraw(j);
	}

	else
	{
		cout<<"enter valid number "<<endl;
	}
	}
	else
	{
		cout<<"enter valid number to select account type";
	
	}
	if(i!=2)
	{
	obj.display();
	}
	
	return 0;
}