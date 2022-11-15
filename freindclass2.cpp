#include<iostream>
using namespace std;

class Shubham
{
	private:
	int money1=1000;
	public:	
	friend class jignesh;
};

class sujal 
{
	private:
		int money2=2000;
	public:
	friend class jignesh;
};

class jignesh : public Shubham,public sujal
{
	public: 
	void getMoney()
	{
		cout<<"jignesh now here money="<<money1+money2<<" Rs."<<endl;
	}
};

int main()
{
	jignesh j;
	j.getMoney();
	return 0;
}