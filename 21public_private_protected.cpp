//21public_private_protected.cpp
#include<iostream>
using namespace std;
class A
{
	private:
		int x=12;
	public:
		int y=45;
	protected:
		int z=28;
};

class B : public A
{
	public:
		void getZ()
		{
			cout<<z<<endl;
		}
};

int main()
{
	B obj;
	
	obj.getZ();
	cout<<obj.y<<endl;
	
	return 0;
}