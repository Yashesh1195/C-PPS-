//to write a string in file
#include<stdio.h>
int main()
{
	FILE*fp;
	char str[9]="yashesh";
//	printf("Enter the string = ");
//	gets(str);
	fp=fopen("file.txt","w");
	fprintf(fp,"%s",str);
	fclose(fp);
	return 0;
}
