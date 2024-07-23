//to find out sum of first and last digit of a given number 
#include<stdio.h>
int main()
{
	int num, first=0, last=0, sum=0;
	printf("Enter the number = ");
	scanf("%d",&num);
	last=num%10;  //Last Digit
	while(num>10)
	{
		num=num/10;
	}
	first=num%10; //First Digit
	sum=first+last;
	printf("The sum of first digit %d and last digit %d = %d",first,last,sum);
	return 0;
}
