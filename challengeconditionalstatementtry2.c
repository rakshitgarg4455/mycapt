#include<stdio.h>

void main()

{
	
	int marks= 0;
	printf("Enter marks:");
	scanf("%d", &marks);
	
	int Grade= (marks<0? "Enter a valid number of marks\a":
	(marks>=0 && marks<40? "F":
	(marks>=40 && marks<=54? "D":
	(marks>=55 && marks<=69? "C":
	(marks>=70 && marks<=84? "B":
	(marks>=85 && marks<=100? "A":"Enter a valid number of marks\a"))))));
	
	printf("Your Grade is %s\n", Grade);
	
}
