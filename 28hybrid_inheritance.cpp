//28hybrid_inheritance.cpp
/*Ambiguity: 
when 2 classes inherit the same class and when we inherit those 2 classes into another class
this ambiguity issue arise.

a,b,c,d

b:a
c:a
d:b,c

To resolve this we need to make that same class Virtual base class using virtual keyword

Syntax:
	
	b: public virtual a
	c: virtual public a
	d: public b,public c
	
*/

#include<iostream>
using namespace std;

class A
{
	public:
		void getA()
		{
			cout<<"A"<<endl;
		}
	
};
class B:virtual public  A
{
		public:
		void getB()
		{
			cout<<"B"<<endl;
		}
	
};
class C:virtual public A
{
		public:
		void getC()
		{
			cout<<"C"<<endl;
		}
	
};
class D : public B, public C
{
		public:
		void getD()
		{
			cout<<"D"<<endl;
		}
	
};

int main()
{
	D obj;
	obj.getA();
	obj.getB();
	obj.getC();
	obj.getD();
	
	return 0;
}