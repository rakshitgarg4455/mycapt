#include<stdio.h>
#include<stdlib.h>

int insert();
int Delete();
int display();
int search();

struct node
{
	char name[100];
	int age;
	int long long phno;
	int salary;
	struct node * link;
};

struct node * head = NULL;

main()
{
	int a=0;
	while(1)
	{
	printf("\n\nEMPLOYEES");
	printf("\nWhat do you want to do?");
	printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:insert();
			break;
		case 2:Delete();
			break;
		case 3:display();
			break;
		case 4:search();
			break;
		case 5:exit(0);
			break;
		default:printf("\nInvalid choice\a");
	}
	}
}

int insert()
{
	struct node * temptr=(struct node*)malloc(sizeof(struct node));
	if(temptr == NULL)
	{
		printf("\nThe memory was not allocated");
	}
	else
	{
		if(head == NULL)
		{
			head = temptr;
			temptr->link = NULL;
		}
		else
		{
			struct node * ptr = head;
			while(ptr->link != NULL)
			{
			ptr = ptr->link;
			}
			ptr->link = temptr;
			temptr->link = NULL;
		}
	}
	printf("\n\nName:");
	scanf("%s", &temptr->name);
	printf("\nAge:");
	scanf("%d", &temptr->age);
	printf("\nPhno:");
	scanf("%lld", &temptr->phno);
	printf("\nSalary:");
	scanf("%d", &temptr->salary);
}

int display()
{
	if(head == NULL)
	{
		printf("\nEMPLOYEE list empty.");
	}
	else
	{
		if(head->link == NULL)
		{
			printf("\nName:%s", head->name);
			printf("\nAge:%d", head->age);
			printf("\nPhno:%lld", head->phno);
			printf("\nSalary:%d", head->salary);
		}
		else
		{
		struct node * ptr = head;
		while(ptr != NULL)
		{
			printf("\nName:%s", ptr->name);
			printf("\nAge:%d", ptr->age);
			printf("\nPhno:%lld", ptr->phno);
			printf("\nSalary:%d", ptr->salary);
			ptr = ptr->link;
		}
		}
	}
}

int Delete()
{
	if(head == NULL)
	{
		printf("The list is already empty");
	}
	else
	{
		if(head->link == NULL)
		{
			free(head);
			head = NULL;
		}
		else
		{
			int a=0;
			printf("Position of element:");
			scanf("%d", &a);
			if(a == 1)
			{
				free(head);
				head = NULL;
			}
			else
			{
				int i=0;
				struct node * ptr = head;
				struct node * ptr2 = NULL;
				for(i=2;i<a && ptr->link != NULL;i++)
				{
					ptr = ptr->link;
				}
				ptr2 = ptr->link;
				ptr->link = ptr2->link;
				free(ptr2);
				ptr2 = NULL;
			}
		}
	}
}

int search()
{
	int long long a=0;
	int found=0, position=0;
	struct node * ptr = head;
	printf("Phone number of employee:");
	scanf("%lld", &a);
	while(found == 0 && ptr != NULL)
	{
		if(a == ptr->phno)
		{
			found = 1;
		}
		position++;
		ptr = ptr->link;
	}
	if(found == 1)
	{
		printf("Position of the employee in the list:%d", position);
	}
	else
	{
		printf("The employee was not found.");
	}
}
