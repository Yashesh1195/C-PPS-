//to sort given array in ascending order
#include<stdio.h>
int main()
{
	int a[100], n, i, j, temp;
	printf("Enter the number of terms = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nValue[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Elements in ascending order are :- \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
