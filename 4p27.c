//to find 1+1/2!+1/3!+1/4!+.....+1/n!
#include<stdio.h>
int main()
{
	float n,sum=0,i,fact=1;
	printf("Enter the value of n = ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		sum=sum+(1/fact);
	}
	printf("Sum = %f",sum);
	return 0;
}

