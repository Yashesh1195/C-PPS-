//To generate first n number of Fibonacci series
#include<stdio.h>
int main()
{
	int n, a=0, b=1, c, i;
	printf("Enter the number of terms = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
