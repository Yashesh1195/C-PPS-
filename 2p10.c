// To find maximum number out of three numbers 
//#include<stdio.h>
//void main()
//{
//	int a,b,c;
//	printf("Enter the number a = ");
//	scanf("%d",&a);
//	printf("Enter the number b = ");
//	scanf("%d",&b);
//	printf("Enter the number c = ");
//	scanf("%d",&c);
//	if(a>b)
//	{
//		if (a>c)
//		{
//			printf("The maximum number is a = %d",a);
//	    }
//	    else 
//	    {
//	    	printf("The maximum number is c = %d",c);
//		}
//	}
//	else if(b>c)
//	{
//		printf("The maximum number is b = %d",b);
//	}
//	else
//	{
//		printf("The maximum number is c = %d",c);
//	}
//	return 0;
//}



// To find maximum number out of three numbers 
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the number a = ");
	scanf("%d",&a);
	printf("Enter the number b = ");
	scanf("%d",&b);
	printf("Enter the number c = ");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
			printf("The maximum number is a = %d",a);
	    }
	 else if(b>c)
	{
		printf("The maximum number is b = %d",b);
	}
	else
	{
		printf("The maximum number is c = %d",c);
	}
	return 0;
}
