//Write a C function in which string will be passed as an argument and convert 
//all lowercase character into their uppercase equivalents
#include<stdio.h>
#include<conio.h>
#include<string.h>
int upper(char[]);
int main()
{
	char str[20];
	printf("Enter the string characters:- \n");
	scanf("%s",str);
	upper(str);
	printf("Uppercase string = %s",str);
}
int upper(char str[])
{
	strcpy(str,strupr(str));
	return upper;
}
