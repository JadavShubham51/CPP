//class friend uing
#include<iostream>
using namespace std;

class Shubham
{
	private:
		int money=1500;
	public:
		friend class Abhinav;
		friend class sujal;
};

class Abhinav : public Shubham
{
	public:
	void getMoney()
	{
		money=money-600;
		cout<<"Abhinav now money = "<<money<<" Rs."<<endl;
		}	
};

class sujal : public Shubham
{
	public:
	void getmoney()
	{
		money=money-900;
		cout<<"sujal now monay = "<<money<<" Rs."<<endl;
		}	
};


int main()
{
	Abhinav abhi;
	abhi.getMoney();
	sujal su;
	su.getmoney();
	return 0;
}