#include<iostream>

struct test
{
	int num1;
	float num2;
	int num3;
	
	void fun()
	{
		printf("\nthis is a c++ structure");
	}
	
	void getNum(float x)
	{
		num2=x;
		printf("\n%f",num2);
	}
		
};

int main()
{
	struct test t1,t2;
	
	printf("Enter your num1:\n");
	scanf("%d",&t1.num1);
	
	printf("%d",t1.num1);
	
	t2.fun();
	
	t1.getNum(-15.23);
	return 0;
}