//Read five person’s height and weight and count the number of person having height 
//greater than 170 and weight less than 50
#include<stdio.h>
int main()
{
	int h,w,i,count=0;
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the details of Person %d :- \n",i);
		printf("Enter Height = ");
		scanf("%d",&h);
		printf("Enter Weight = ");
		scanf("%d",&w);
		printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n");
		if(h>170 && w<50)
		{
			count++;
		}
	}
	printf("\nThe total number of person having Height>170 & Weight<50 = %d",count);
	return 0;
}
