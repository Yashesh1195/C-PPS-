// To find if the no. accepted is +ve, -ve or zero
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    if (number>0)
    	{
    		printf("The number is positive");
		}
	else if (number<0)
		{
			printf("The number is negative");
		}
	else
		{
			printf("The number is zero");
		}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int num;
//	printf("Enter the number = ");
//	scanf("%d",&num);
//	if(num>0)
//	{
//		printf("The number is positive");
//	}
//	else if(num<0)
//	{
//		printf("The number is negative");
//	}
//	else
//	{
//		printf("The number is zero");
//	}
//}
