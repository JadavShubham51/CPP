//33friend_function3.cpp
#include<iostream>
using namespace std;

class Shubham;
class Khusal
{
	private:
	int money1 = 500;
	public:
		friend void Alok(Khusal K,Shubham S);
};
class Shubham
{
	private:
	int money2 = 1000;
	public:
		friend void Alok(Khusal K,Shubham S);
};

void Alok(Khusal K,Shubham S)
{
	cout<<"Alok now have "<<K.money1+S.money2<<" RS."<<endl;
}

int main()
{
	Khusal K1;
	Shubham S1;
	Alok(K1,S1);
	return 0;
}