//24single_inheritance.cpp
#include<iostream>
using namespace std;

class Father
{
	public:
	
	void getThappad()
	{
		cout<<"ek padi"<<endl;	
	}	
};

class mother
{
	public:
		
	void getFood()
	{
		cout<<"khadhu tuye"<<endl;
	}	
};

class Son: public Father
{
	public:
	void testson()
	{
		cout<<"this Son..!"<<endl;
	}
};

class Daughter:public mother
{
	public:
		void testDaughter()
		{
			cout<<"Daughter"<<endl;
		}
};

int main()
{
	Son s;
	Daughter d;
	d.getFood();
	s.getThappad();
	return 0;
}