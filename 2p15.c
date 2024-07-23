// To input an integer number and check the last digit of number is even or odd
#include<stdio.h>
int main()
{
	int number,remainder;
	printf("Enter the number = ");
	scanf("%d",&number);
	remainder=number%10;
//	remainder found here, is the last digit of any number
	if(remainder%2==0)
	{
	    printf("The last digit is even!!");
	}	
	else 
	{
		printf("The last digit is odd!!");
	}
	return 0;
}
