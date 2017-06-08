#include<stdio.h>
void towers(int,char,char,char);
int main()
{
int num;
printf("number of disks");
scanf("%d",&num);
printf("tower of hanoi\n");
towers(num,'D','E','F');
return 0;
}
void towers(int num,char from xyz,char to xyz,char auxxyz)
{
if(num==1)
{
printf("move disk 1 from xyz %c to xyz %c",from xyz,toxyz);
return;
}
towers(num-1,from xyz,auxxyz,to xyz);
printf("move disk %d from xyz %c to %c,num,fromxyz,toxyz);
towers(num-1,auxxyz,toxyz,toxyz,fromxyz);
}
