//to print the address of character and the character of string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	printf("Enter the string = ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		int *ptr=&str[i];
		printf("Address of character %c is %u\n",*ptr,ptr);
	}
	return 0;
}
