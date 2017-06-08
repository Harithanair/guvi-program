#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20],temp;
int i,j;
clrscr();
printf("\n enter a string");
scanf("%s",str);
printf("\n\n orginal string %s",str);
for(i=0;i<strleng(str);i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("\n after swap string %s",str);
getch();
}
