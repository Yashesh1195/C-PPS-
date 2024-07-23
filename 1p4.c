// Interchange of two numbers
#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("The value of a = %d",a);
    printf("\nThe value of b = %d",b);
    return 0;
}