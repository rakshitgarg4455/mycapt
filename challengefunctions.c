#include<stdio.h>

int prime(int, int);

main()
{
	int a,b;
	printf("Enter number:");
	scanf("%d", &a);
	if(a==1 || a==0)
	{
		printf("The number is not prime.");
	}
	else{
	b= prime(a, a/2);
	if(b==1)
	{
		printf("The number is prime");
		
	}
	else
	{
		printf("The number is not prime");
	}
        }
}

int prime(int num1,int num2)
{
	if(num2==1)
	{
		return 1;
	}
	else
	{
		if(num1%num2== 0)
		{
			return 0;
		}
		else
		{
			prime(num1, num2-1);
		}
	}
}
