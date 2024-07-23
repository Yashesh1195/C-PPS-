//to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!...-x^9/9!
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	float fact, x, sum=1;
	printf("Enter the value of x = ");
	scanf("%f",&x);
	for(i=1;i<=9;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}
		sum=sum+(pow(-x,i))/fact;
	}
	printf("The answer of given series = %f",sum);
	return 0;
}
