// C++ program to implement

#include <iostream>
using namespace std;
  
template <class T>
T swap_numbers(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    
    return t;
}
  
int main()
{
    int a, b;
//    a = 10, b = 20;
  	cout<<"enter your a"<<endl;
  	cin>>a;
  	cout<<"enter your b"<<endl;
  	cin>>b;
    swap_numbers(a, b);
    cout << a << " " << b << endl;
    return 0;
}