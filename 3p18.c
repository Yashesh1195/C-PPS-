//to reverse a number
#include<stdio.h>
int main()
{
	int num, r;
	printf("Enter the number = ");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		printf("%d",r);
		num=num/10;
	}
	return 0;
}
