//34friend_class.cpp
/*
Friend Class: to access private / protected members of a class.

Syntax:
friend class className;
*/

#include<iostream>
using namespace std;

class Manan
{
	private:
		int money = 340;
	
	public:
		friend class Ayush;
};

class Ayush : public Manan
{
	public:
		void getMoney()
		{
			cout<<"Ayush now have "<<money<<endl;
		}
};

int main()
{
	Ayush ayu;
	ayu.getMoney();	
	return 0;
}