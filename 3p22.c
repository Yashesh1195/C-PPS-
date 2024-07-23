//to calculate average and total of 5 students for 3 subjects (use nested for loops)
#include<stdio.h>
int main()
{
	int i,j,marks;
	float avg=0;
	for(i=1;i<=5;i++)
	{
		int sum=0;
	    printf("\nStudent %d :-\n",i);
	    for(j=1;j<=3;j++)
	    {
	    	printf("\nEnter marks for Subject %d = ",j);
	    	scanf("%d",&marks);
	    	sum=sum+marks;
	    	avg=(float)sum/3;
		}
		printf("\nTotal marks of Student %d = %d\n",i,sum);
		printf("\nAverage marks of Student %d = %.3f\n",i,avg);
		printf("\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n");
	}
	return 0;
}
