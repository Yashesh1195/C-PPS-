//Design a structure student_record to contain name, branch and total marks obtained. 
//Develop a program to read data for 5 students in a class and print them 
#include<stdio.h>
int main()
{
	struct student_record
	{
		char name[20];
		char branch[25];
		int tmarks;
	}sr[5];
	int i;
	printf("Enter the details:-\n");
	for(i=0;i<5;i++)
	{
		printf("Student-%d\n",i+1);
		printf("Name : ");
		scanf("%s",sr[i].name);
		printf("Branch : ");
		scanf("%s",sr[i].branch);
		printf("Total Marks : ");
		scanf("%d",&sr[i].tmarks);
	}
			printf("Details of Students:- \n");
			printf("Name \t Branch \t Total Marks\n");
	for(i=0;i<5;i++)
	{
//		printf("Details of Student-%d\n",i+1);
//		printf("Name : %s\n",sr[i].name);
//		printf("Branch : %s\n",sr[i].branch);
//		printf("Total Marks : %d\n",sr[i].tmarks);
		printf("%s \t %s \t\t %d\n",sr[i].name,sr[i].branch,sr[i].tmarks);
	}
	return 0;
}
