//30friend_function.cpp
/*
friend function/class: 
==> used to access private and protected members of a class

Use friend keyword

Syntax:

	friend	datatype functionName();

*/

#include<iostream>
using namespace std;

class Abhinav
{
	private:
		string tv="Watching..!";
	public:
		friend void Shubham(Abhinav ref);		
};

	void Shubham(Abhinav ref)
	{
		cout<<ref.tv<<"...IPl 2022"<<endl;
	}

int main()
{
	Abhinav abhi;
	Shubham(abhi);
	return 0;
}




