//to replace a character in given string
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], old, new;
	int i;
	printf("Enter the string = ");
	gets(str);
	printf("Enter the character to be changed = ");
	scanf("%c",&old);
	getchar();
	printf("Enter the new character = ");
	scanf("%c",&new);
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==old)
		{
			str[i]=new;
		}
	}
	printf("New String = %s",str);
	return 0;
}
