#include<stdio.h>

int digits(int num1);

int main()
{
	int a=0, b=0;
	printf("Enter number: ");
	scanf("%d", &a);
	b= digits(a);
	printf("%d", b);
}

int digits(int num1)
{
	if(num1==0)
	{
		return 0;
	}
	else
	{
		return num1%10+digits(num1/10);
	}
	
}
