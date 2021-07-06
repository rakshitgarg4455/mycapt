#include<stdio.h>

int main()
{
	int matrix[3][3];
	int *a=0, *b=0;
	int c=0;
	int *d=0;
	a= &matrix[0][0];
	
	for(a=&matrix[0][0];a<=&matrix[2][2];a++)
	{
		printf("Element %d: ", c);
		c++;
		scanf("%d", &*a);
	}
	
	printf("\n\n");
	
	for(b=&matrix[0][0];b<=&matrix[2][2];b++)
	{
		printf("  %d\n", *b);
	}
	
	printf("The elements at the diagonal from left to right are:\n");
	
	for(d=&matrix[0][0];d<=&matrix[2][2];d= d+4)
	{
		printf("  %d\n", *d);
	}
	
	return 0;
}
