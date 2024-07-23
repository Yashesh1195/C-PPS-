//to find the sum and average of different numbers which are accepted by user as many as user wants
#include<stdio.h>
int main()
{
	int n,x[n],i=1,sum=0;
	float avg;
	printf("Enter the number of terms = ");
	scanf("%d",&n);	
    while(i<=n)
    {
    printf("Enter the number x[%d] : ",i);
	scanf("%d",&x[i]);
	sum=sum+x[i];
	avg=(float)sum/n;	
	i++;
	}
	printf("The sum of %d numbers = %d\n",n,sum);
	printf("The average of %d numbers = %f",n,avg);
	return 0;
}

