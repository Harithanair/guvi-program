#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
char inputString[20];
printf("enter a string for integer conversion\n");
gets(inputString);
printf("integer:%d\n",atoi(inputString));
getch();
return 0;
}
