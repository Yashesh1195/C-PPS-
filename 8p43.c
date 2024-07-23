//which return 1 if number is prime otherwise returns 0 
#include<stdio.h>
int prime(int num);
int main()
{
	int n, m;
	printf("Enter the number = ");
	scanf("%d",&n);
	m=prime(n);
	if(m==0)
	{
		printf("%d is a prime number",n);
	}
	else{
		printf("%d is not a prime number",n);
	}
}

int prime(int num)
{
	int i,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
