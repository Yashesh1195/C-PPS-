//To find out the Maximum and Minimum number from given 10 Numbers
#include<stdio.h>
int main()
{
	int x[10], max, min, i;
	printf("Enter elements for array :- \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		if(x[i]>max)
		{
			max=x[i];
		}
		if(x[i]<min)
		{
			min=x[i];
		}
	}
	printf("Maximum value = %d\n",max);
	printf("Minimum value = %d",min);
	return 0;
}
