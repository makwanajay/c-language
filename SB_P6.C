#include<stdio.h>
#include<conio.h>
#include<string.h>
char string()
{
char string1[50],string2[50];
  return 0;
};
void main()
{
clrscr();
	char string1[50],string2[50];
	printf("enter any string:");
	scanf("%s",&string1);
	strrev(string1);
	strcpy(string1,string2);
	if(strcmp(string1,string2)==0)
	{
	printf("number is palindrome");
	}
	else
	{
	printf("number is not palindrome");
	}
getch();
}
