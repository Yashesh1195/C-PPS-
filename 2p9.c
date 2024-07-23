// To read marks and tell whether the student is pass or fail
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks = ");
	scanf("%d",&marks);
	if(marks>=40)
	{
		printf("Congratulations!! You are Pass!!");
	}
	else if(marks<40 && marks >=0)
	{
		printf("You are Fail!!");
	}
	else 
	{
		printf("Enter Valid Marks!!");
	}
	return 0;
}
