//27multilevel_inheritance1.cpp
#include<iostream>
using namespace std;

class Father 
{
	protected:
	int prop=100;
	int finalProp = 40;
	public:
	void property()
	{
		cout<<"initial property of father ="<<prop<<endl;
	}
	void FinalProperty()
	{
		
		finalProp = prop-60;
		cout<<"Final property of father ="<<finalProp<<endl;	
	}	
};

class Mother : public Father
{
	private:
		int prop_mother;
	public:
		void property()
		{
			cout<<"property of Mother = "<<prop-40<<endl;
		}
};

class Son : public Father
{
	public:
		void property()
		{
			int Sonprop;
			Sonprop = finalProp-10;
			cout<<"Son property = "<<Sonprop<<endl;
		}
};

int main()
{
	Mother m;
	Son s;
	s.property();
	m.property();
	m.Father::property(); // socpe of resolotion
	m.FinalProperty();
	return 0;
}
