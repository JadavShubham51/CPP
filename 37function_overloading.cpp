//37function_overloading.cpp
#include<iostream>
using namespace std;

class Overloading
{
	public:
		
		void display()
		{
			cout<<"this is disply function..!"<<endl;
		}				
		void display(int x)
		{
			cout<<"this is disply function wid para..!"<<endl;
		}
		
		void display(string x)
		{
			cout<<"hello test...!"<<endl;
		}
		
		void display(int val,int v)
		{
			cout<<"hello test123...!"<<endl;
		}
		void display(int val,string v)
		{
			cout<<"hello test123...!"<<endl;
		}
		void display(string val,int v)
		{
			cout<<"hello test123...!"<<endl;
		}
};

int main()
{
	Overloading obj;
	obj.display();
	obj.display(12);
	obj.display("nirav");
	obj.display(12,5);
	return 0;
}