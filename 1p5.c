// Conversion of distance in km to m, ft, in, cm
#include<stdio.h>
int main()
{
    int km,m,cm;
    float ft,in;
    printf("Enter the distance in kilometer = ");
    scanf("%d",&km);
    m=km*1000;
    ft=km*3281;
    in=km*39370;
    cm=km*100000;
    printf("The distance in meter = %d",m);
    printf("\nThe distance in feet = %f",ft);
    printf("\nThe distance in inches = %f",in);
    printf("\nThe distance in centimeter = %d",cm);
    return 0;
}