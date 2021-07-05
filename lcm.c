#include<stdio.h>

int lcm(int num1, int num2, int num3);

int main()
{
	int a=0, b=0, c=0, d=0, e=0;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	c=a>b? a:b;
	d=b>a? a:b;
	e= c;
	
	int num= lcm(c, d, e);
}

int lcm(int num1, int num2,int num3)
{
	if(num3%num1==0 && num3%num2==0)
	{
		printf("%d", num3);
	}
	else
	{
		return lcm(num1, num2, num3+1);
	}
}
