// Calculator
#include<stdio.h>
int main()
{
    float a,b,c;
    int choice, i;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("\nEnter the choice of operation you want to perform.");
    printf("\n1-Addition");
    printf("\n2-Subtraction");
    printf("\n3-Multiplication");
    printf("\n4-Division\n");
        scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("The addition = %f\n",c=a+b);
        break;
    case 2:
        printf("The subtraction = %f\n",c=a-b);
        break;
    case 3:
        printf("The multiplication = %f\n",c=a*b);
        break;
    case 4:
        if(b==0)
        {
        	printf("Divide by zero error.\n");
		}
		else
		{
		printf("The division = %f\n",c=a/b);
        break;
		}
    default:
    	printf("Enter the valid number");
        break;
    }
    return 0;
}

//#include<stdio.h>
//int main()
//{
//    float a,b,c;
//    int choice, i;
//    printf("Enter the value of a = ");
//    scanf("%f",&a);
//    printf("Enter the value of b = ");
//    scanf("%f",&b);
//    printf("\nEnter the choice of operation you want to perform.");
//    printf("\n1-Addition");
//    printf("\n2-Subtraction");
//    printf("\n3-Multiplication");
//    printf("\n4-Division\n");
//    for(i=1;i<=4;i++)
//    {
//	scanf("%d",&choice);
//    switch (choice)
//    {
//    case 1:
//        printf("The addition = %f\n",c=a+b);
//        break;
//    case 2:
//        printf("The subtraction = %f\n",c=a-b);
//        break;
//    case 3:
//        printf("The multiplication = %f\n",c=a*b);
//        break;
//    case 4:
//        if(b==0)
//        {
//        	printf("Divide by zero error.\n");
//		}
//		else
//		{
//		printf("The division = %f\n",c=a/b);
//        break;
//		}
//    default:
//    	printf("Enter the valid number");
//        break;
//    }
//	}
//    return 0;
//}
    


// #include<stdio.h>
// int main()
// {
//     int a,b,sum,dif,pro;
//     float div;
//     printf("Enter the value of a ");
//     scanf("%d",&a);
//     printf("Enter the value of b ");
//     scanf("%d",&b);
//     // Addition
//     sum=a+b;
//     // Subtraction
//     dif=a-b;
//     // Multiplication
//     pro=a*b;
//     // Division
//     div=a/b;
//     printf("The addition of a and b = %d",sum);
//     printf("\nThe subtraction of a and b = %d",dif);
//     printf("\nThe multiplication of a and b = %d",pro);
//     printf("\nThe division of a and b = %f",div);
//     return 0;
// }
