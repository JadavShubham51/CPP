// Write a program to calculate the area of circle, rectangle and triangle using 
//Function Overloading 
// Rectangle: Area * breadth 
// Triangle: ½ *Area* breadth 
// Circle: Pi * Area *Area

#include<iostream>
using namespace std;

class Area
{
	public:
		void area(int a,int b)
		{
			cout<<"Area of rectangle with height "<<a<<" and breadth "<<b<<" is "<<a*b<<endl;
		}
		
		void area(double a, float b)
		{
			
			cout<<"Area of triangle with height "<<a<<" and breadth "<<b<<" is "<<0.5*a*b<<endl;
		}
		
		void area(float a)
		{
			
			cout<<"Area of circle with radius "<<a<<" is "<<3.14*a*a<<endl;
		}
};

int main()
{
	Area obj;
	obj.area(4.5);
	obj.area(5.3,7.5);
	obj.area(4);
	return 0;
} 