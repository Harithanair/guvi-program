#include<stdio.h>
int main()
{
int number,i,sum=0;
printf("\n enter the integer\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
sum=sum+i;
}
printf("sum of natural numbers=%d",sum);
return 0;
}
