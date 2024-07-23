////to evaluate the series 1^2+2^2+3^2+……+n^2
//#include<stdio.h>
//int main()
//{
//	int n,sum=0,i=1;
//	printf("Enter the value of n = ");
//	scanf("%d",&n);
//	while(i<=n)
//	{
//	sum=sum+(i*i);
//	i++;
//	}
//	printf("sum = %d",sum);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
//	while(i<=n)
//	{
//		sum=sum+(i*i);
//		i++;
//	}
	printf("Sum = %d",sum);
	return 0;
}

