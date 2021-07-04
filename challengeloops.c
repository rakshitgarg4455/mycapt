#include<stdio.h>

main()

{
	
	int a=0;
	int b=0;
	int c=0;
	printf("Enter the number of stairs:");
	scanf("%d", &c);
	
	for(a=0;a<=c;a=a+1)
	{
		for(b=0;b<=a;b= b+1)
		{
			printf("0");
			printf("1");
		}
		printf("\n");
	}
	
	return 0;
}
