// Centigrade to Fahrenheit Conversion
#include<stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter the Temperature in Centigrade = ");
    scanf("%d",&c);
    f=1.8*c+32;
    printf("The Temperature in Fahrenheit = %f",f);
    return 0;
}
