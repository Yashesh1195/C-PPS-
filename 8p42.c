//that defines a function to add first n numbers
#include<stdio.h>
int add(int x);
int main()
{
	int m, n;
	printf("Enter the number of terms = ");
	scanf("%d",&n);
	m=add(n);
	printf("Addition of first %d numbers = %d",n,m);
}
int add(int x)
{
	int i, sum=0;
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
	return sum;
}

//OOOOOORRRRRRR

//int add(int x);
//int main()
//{
//	int m, n;
//	printf("Enter the number of terms = ");
//	scanf("%d",&n);
//	m=add(n);
//}
//int add(int x)
//{
//	int i, sum=0;
//	for(i=1;i<=x;i++)
//	{
//		sum=sum+i;
//	}
//	printf("Addition of first %d numbers = %d",x,sum);
//}
