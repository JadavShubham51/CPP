//31friend_function1.cpp
#include<iostream>
using namespace std;

class Manan
{
	private:
		int money = 1500;
	public:
		friend void Ayush(Manan M);
};

void Ayush(Manan M)
{
	cout<<"Ayush have now "<<M.money<<"Rs."<<endl;
}

int main()
{
	Manan obj;
	Ayush(obj);
	return 0;
}