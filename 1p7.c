// Distance Travelled
#include<stdio.h>
int main()
{
    float a,d,t,u;
    printf("Enter the velocity u = ");
    scanf("%f",&u);
    printf("Enter the time taken t = ");
    scanf("%f",&t);
    printf("Enter the acceleration a = ");
    scanf("%f",&a);
    d=(u*t)+(0.5*a*t*t);
    printf("The distance travelled d = %f",d);
    return 0;
}