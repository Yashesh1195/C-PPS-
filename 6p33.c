//to find out which number is even or odd from list of 10 numbers using array
#include<stdio.h>
int main()
{
	int num[10],i;
	
//	input
	printf("Enter the numbers : \n");
	for(i=1;i<=10;i++)
	{
		printf("Number %d = ",i);
		scanf("%d",&num[i]);
	}
	
//	to print list of even no.s
	printf("The even numbers are:- ");
	for(i=1;i<=10;i++)
	{
		if(num[i]%2==0)
		{
			printf("\n%d",num[i]);
		}
	}
//	to print list of odd no.s
	printf("\nThe odd numbers are:- ");
	for(i=1;i<=10;i++)
	{
		if(num[i]%2!=0)
		{
			printf("\n%d",num[i]);
		}
	}
	return 0;
}
