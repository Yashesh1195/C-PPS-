//Define a structure named “personal” that would contain person name, date of joining 
//and salary. Use this structure to read this information of 5 people and print the same 
//on screen  
#include<stdio.h>
int main()
{
	struct personal
	{
		char pname[20];
		char date[15];
		int salary;
	}p[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the details of Person-%d\n",i+1);
		printf("Name : ");
		scanf("%s",p[i].pname);
		printf("Date of Joining (in DD/MM/YYYY) : ");
		scanf("%s",p[i].date);
		printf("Salary : ");
		scanf("%d",&p[i].salary);
	}
	for(i=0;i<5;i++)
	{
		printf("Details of Person-%d\n",i+1);
		printf("Name : %s\n",p[i].pname);
		printf("Date of Joining : %s\n",p[i].date);
		printf("Salary : %d\n",p[i].salary);
	}
	return 0;
}
