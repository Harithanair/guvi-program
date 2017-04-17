#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter the string to check if it is a palindrom\n");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("entered string is a palindrom\n");
else
printf("entered string is not a palindrom\n");
return 0;
}
