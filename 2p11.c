// To check whether the entered character is capital, small letter, digit or any special character
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the value = ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("The entered value is a Capital Letter");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("The entered value is a small letter");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("The entered value is a digit");
	}
	else
	{
		printf("The entered value is a special character");
	}
	return 0;
}
