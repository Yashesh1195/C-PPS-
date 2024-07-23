//to calculate the average, geometric and harmonic mean of n elements in an array
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num[1000], n, i;
	float sum=0,  avg=0, gm=1, hm;
//	no. of terms
    printf("Enter the number of terms = ");
    scanf("%d",&n);
//    input
    printf("Enter the values:- \n");
    for(i=0;i<n;i++)
    {
    	printf("Value[%d]= ",i+1);
    	scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
		avg=avg+num[i];
		gm=gm*num[i];
	}
	avg=avg/n;
	gm=pow(gm,(float)1/n);
	hm=(float)n/sum;	
	printf("Average Mean = %f\n",avg);	
	printf("Geometric Mean = %f\n",gm);	
	printf("Harmonic Mean = %f",hm);
	return 0;
}
