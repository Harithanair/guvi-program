#include<stdio.h>
int main()
{
int n,i,range;
printf("enter the integer");
scanf("%d",&n);
printf("enter the range");
scanf("%d",&range);
for(i=0;i<=range;++i)
{
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
