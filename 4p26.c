//to find 1+1/2+1/3+1/4+....+1/n
//#include<stdio.h>
//int main()
//{
//	float n,sum,i=1;
//	printf("Enter the value of n = ");
//	scanf("%f",&n);
//	while(i<=n)
//	{
//		sum=sum+(1/i);
//		i++;
//	}
//	printf("sum = %f",sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	float n,sum=0,i;
	printf("Enter the value of n = ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("sum = %f",sum);
	return 0;
}
