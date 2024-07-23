//to find a character from given string
#include <stdio.h>
int main() 
{
  char str[20], ch, flag = 1;
  int i;
  printf("\n Enter String = ");
  gets(str);
  printf("Enter Character to Find in String = ");
  scanf("%c", & ch);
  for (i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] == ch) 
	{
      printf("Character Index = %d\n", i + 1);
      flag = 0;
    }
  }
  if (flag == 1) 
  {
    printf("Character Not Found");
  }
  return 0;
}