//Define a structure called cricket that will describe the following information: Player 
//name, Team name, Batting average. Using cricket, read the information about 5 
//players and print list containing names of players with their batting average
#include<stdio.h>
int main()
{
	struct cricket
	{
		char pname[20];
		char tname[20];
		float bavg;
	}c[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the details of Player-%d\n",i+1);
		printf("Name : ");
		scanf("%s",c[i].pname);
		printf("Team Name : ");
		scanf("%s",c[i].tname);
		printf("Average : ");
		scanf("%f",&c[i].bavg);
	}
	printf("Name \t Average\n");
	for(i=0;i<5;i++)
	{
//		printf("Details of Player-%d\n",i+1);
//		printf("Name : %s",c[i].pname);
//		printf("Average : %f",c[i].bavg);
	    printf("%s \t %f\n",c[i].pname,c[i].bavg);
	}
	return 0;
}
