//36test_operators.cpp
#include<iostream>
using namespace std;
class test
{
	public:
		int a;
		void setA(int val)
		{
			a = val;
		}
		void display()
		{
			cout<<a<<endl;
		}
};

int main()
{
	int a=3,b=5;
	string x="3",y="5";	
	char ch1='p',ch2='P';
	cout<<" int ==> a+ b ="<< a+b<<endl;//8
	cout<<"String ==> x + y = "<<x+y<<endl;//
	
	
	cout<<"ASCII of ch1 = "<<(int)ch1<<endl;//112
	cout<<"ASCII of ch2 = "<<(int)ch2<<endl;//80
	
	
	cout<<"char ==> ch1+ch2 = "<<ch1+ch2<<endl;
	
	
	test obj1,obj2,obj3;
	obj1.setA(10);
	obj2.setA(20);
	//++obj1;
	
//	obj3 = obj1+obj2;
//	cout<<obj3<<endl;
	obj1.display();//10
	obj2.display();//20
	obj3.display();//10
	return 0;
}