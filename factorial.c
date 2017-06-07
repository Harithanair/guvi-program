#include<stdio.h>
int main()
{
int i,f=1,num;
printf("Enter a number");
scanf("%d",&num);
for(i=1;1<=num;i++)
f=f*i;
printf("Factoruial of %d is :%d",num,f);
return 0;
}
