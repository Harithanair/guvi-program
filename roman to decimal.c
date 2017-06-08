#include<stdio.h>
#include<string.h>
int digit(char);
int main()
{
char romanval[1000];
int i=0;
long int number=0;
printf("Enter roman num(valid digit are I,V,X,L,C,D,M)\n");
scanf("%s",romanval);
while(romanval[i])
{
if(digit(romanval[i])2)
{
if(digit(romanval[i]=digit(romanval[i+1]))
number=number+digit(romanval[i]);
else
{
number=number+(digit(romanval[i+1])-digit(romanval[i]));
i++;
}
i++;
}
printf("its decimal value is%ld",number);
return 0;
}
int digit(char c)
{
int value=0;
switch(c)
{
case 'I':
          value=1;
          break;
case 'X':
          value=5;
          break;
case 'C':
          value=10;
          break;
case 'D':
          value=100;
          break;
case 'M':
          value=500;
          break;
case 'O':
          value=0;
          break;
default:
          value=-1;
          }
          return value;
          }
