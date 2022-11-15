//32friend_function.cpp
#include<iostream>
using namespace std;

class Manan
{
	protected:
		int money = 500;

	public:
		friend void Ayush(Manan m1);
		friend void Abhinav(Manan m2);	
};

void Ayush(Manan m1)
{
	m1.money = m1.money-350;
	cout<<"Ayush now have "<<m1.money<<"Rs."<<endl;
}

void Abhinav(Manan m2)
{
	m2.money = m2.money-150;
	cout<<"Abhinav now have "<<m2.money<<"Rs."<<endl;
}

int main()
{
	Manan obj1,obj2;
	Ayush(obj1);
	Abhinav(obj2);
	return 0;
}