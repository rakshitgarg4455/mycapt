#include<stdio.h>

int main()
{
	char a[100];
	int b=0, c=0;
	printf("Enter the word to be reversed:");
	scanf("%s", a);
	FILE * fp;
	FILE * fp2;
	fp = fopen("reverse.txt","w");
	fprintf(fp,"%s", a);
	fclose(fp);
	fp = fopen("reverse.txt","r");
	fseek(fp,0,SEEK_END);
	c = ftell(fp);
	fp2 = fopen("reversedresult.txt","a");
	while(b<c)
	{
		b++;
		fseek(fp,-b,SEEK_END);
		fprintf(fp2, "%c", getc(fp));
	}
	fclose(fp);
	fclose(fp2);
	
}
