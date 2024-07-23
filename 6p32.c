//to read and store the roll No and marks of 20 students using array
#include<stdio.h>
int main()
{
	int roll[20], marks[20],i;
	for(i=0;i<=19;i++)
	{
		printf("Enter the details of Student %d\n",i+1);
		printf("Roll No. = ");
		scanf("%d",&roll[i]);
        printf("Marks = ");
		scanf("%d",&marks[i]); 		
	}
	return 0;
}
