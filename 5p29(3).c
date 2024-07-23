//To print star pattern
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the value of n = ");
	scanf("%d",&n);
//	for(i=1;i<=n;i++) //outer loop
//	{
//		for(j=5;j>=i;j--)  //inner loop
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
    for(i=n;i>=1;i--)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf(" *");
		}
		printf("\n");
	}
	return 0;
}
