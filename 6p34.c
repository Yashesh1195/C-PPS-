//to find maximum element from 1-Dimensional array
#include<stdio.h>
int main()
{
	int num[100], i, n, max;
//	no. of terms
    printf("Enter the number of terms you want to enter = ");
    scanf("%d",&n);
//    input
    printf("Enter the values for array:- \n");
    for(i=0;i<n;i++)
    {
    	printf("Value[%d] = ",i+1);
    	scanf("%d",&num[i]);
	}
//	max. logic
    for(i=0;i<n;i++)
    {
    	if(i==0)
    	{
    	  max=num[i];	
		}
		else if(max<num[i])
        {
	      max=num[i];
        }  
	}
	printf("The maximum number = %d",max);
	return 0;
}

