//to interchange the values of two variables, say x and y
#include<stdio.h>
int swap(int a, int b);
int main()
{
	int x,y;
	printf("Enter the value of x = ");
	scanf("%d",&x);
	printf("Enter the value of y = ");
	scanf("%d",&y);
	swap(x,y);
}
int swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("The value of x = %d\n",a);
	printf("The value of y = %d",b);
}
