//38function_overriding.cpp
#include<iostream>
using namespace std;

class overriding
{
	public:
	void test()
	{
		cout<<"this is parent..!"<<endl;
	}	
};

class Person : public overriding
{
	public:
	void test()
	{
		cout<<"this is Child..!"<<endl;
		}	
};

int main()
{
	Person obj;
	obj.test();
	obj.overriding::test();
	return 0;
}