//to find factorial of a number using recursion.
#include<stdio.h>
int factorial(int x);
int main()
{
	int n, f;
	printf("Enter the number = ");
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of %d = %d",n,f);
}
int factorial(int x)
{
	int fact;
	if(x==1)
	{
		fact=1;
	}
	else
	{
		fact=x*factorial(x-1);
	}
	return(fact);
}
