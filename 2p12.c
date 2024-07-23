#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks = ");
	scanf("%d",&marks);
	if(marks>=80 && marks<=100)
	{
		printf("You've got Distinction!");
	}
	else if(marks>=60 && marks<=79)
	{
		printf("You've got First Class!");
	}
	else if(marks>=40 && marks<=59)
	{
		printf("You've got Second Class!");
	}
//	else if(marks>100 || marks<0)
//	{
//		printf("Enter valid marks!");
//	}
	else if(marks>=0 && marks<40)
	{
		printf("You've failed!");
	}
	else
	{
		printf("Enter valid marks!");
	}
	return 0;
}
