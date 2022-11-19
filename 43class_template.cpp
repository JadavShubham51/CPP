//43class_template.cpp
#include<iostream>
using namespace std;

template<class Xyz>
class Alok
{
	Xyz num;
	public:
		Xyz setNum(Xyz x)
		{
			return x;
		}
};

int main()
{
	
	Alok <int>obj1;
	Alok <float>obj2;
	Alok <char>obj3;
	Alok <string>obj4;
	
	
	cout<<obj1.setNum(10)<<endl;
	cout<<obj2.setNum(10.47)<<endl;
	cout<<obj3.setNum('s')<<endl;
	cout<<obj4.setNum("Shubham");
	return 0;
}
