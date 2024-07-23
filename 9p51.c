//Define structure called time_struct containing three members like integer hour, 
//integer minute and integer second. Develop a program that would assign values to the 
//individual number and display the time in the following format: 16:40:51  
#include<stdio.h>
int main()
{
	struct time_struct
	{
		int hour;
		int minute;
		int second;
	}t1;
	
	printf("Enter the time:-\n");
	printf("Hour : ");
	scanf("%d",&t1.hour);
	printf("Minute : ");
	scanf("%d",&t1.minute);
	printf("Second : ");
	scanf("%d",&t1.second);
	printf("Time - %d:%d:%d",t1.hour,t1.minute,t1.second);
	return 0;
}
