#include<stdio.h>

main()

{
	
	printf("Menu");
	printf("Choose from one of the options: \n1)Burger \n2)Pasta \n3)Pizza \n4)French Fries \n5)Sandwich\n");
	int choice=0;
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:printf("Food item-Burger\nPrice-Rs. 129");
		break;
		case 2:printf("Food item-Pasta\nPrice-Rs. 179");
		break;
		case 3:printf("Food item-Pizza\nPrice-Rs. 239");
		break;
		case 4:printf("Food item-French Fires\nRs. Price-Rs. 99");
		break;
		case 5:printf("Food item-Sandwich\nPrice-Rs. 149");
		break;
		default:printf("Invalid choice\a");
	}
	
	return 0;
}
