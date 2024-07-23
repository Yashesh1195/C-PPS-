// Simple Interest
#include<stdio.h>
int main()
{
    float p,r,n,i;
    printf("Enter the principal amount = ");
    scanf("%f",&p);
    printf("Enter the rate of interest = ");
    scanf("%f",&r);
    printf("Enter the value of number of years = ");
    scanf("%f",&n);
    i=(p*r*n)/100;
    printf("The simple interest = %f",i);
    return 0;
}