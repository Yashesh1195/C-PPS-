// Area of triangle
#include<stdio.h>
int main()
{
  int b,h;
  float area;
  printf("Enter the value of base = ");
  scanf("%d",&b); 
  printf("Enter the value of height = ");
  scanf("%d",&h);
  area=0.5*b*h;
  printf("The area of triangle = %f",area);
  return 0; 
}
