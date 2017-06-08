#include<stdio.h>
int main()
{
int down,up;
long long result=1;
printf("enter a down number");
scanf("%d",&down);
printf("enter an up");
scanf("%d",&up);
while(up!=0)
{
result *=down;
--up;
}
printf("Answer=%d",result);
return 0;
}
