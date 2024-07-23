//to read structure elements from keyboard 
#include<stdio.h>
int main()
{
	struct book
	{
		char title[20];
		float price;
		char author[30];
	}b1;
//	struct book b1;
	int i;
	for(i=0;i<1;i++)
	{
		printf("Enter the details of Book-%d\n",i+1);
		printf("Title : ");
		scanf("%s",b1.title);
		printf("Price : ");
		scanf("%f",&b1.price);
		printf("Author : ");
		scanf("%s",b1.author);
	}
	for(i=0;i<1;i++)
	{
		printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
		printf("Details of Book-%d\n",i+1);
		printf("Title : %s",b1.title);
		printf("\nPrice : %f",b1.price);
		printf("\nAuthor : %s",b1.author);
	}
	return 0;
}
