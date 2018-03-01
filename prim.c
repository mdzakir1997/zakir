#include<stdio.h>
void main()
{
int y,z=0,i;
printf("\n Enter y");
scanf("\n%d",&y);
for(i=2;i<=y/2;i++)
{
if(y%i==0)
{
z=1;
break;
}
}
if(z==0)
{
printf("Yes");
}
else
{
printf("Not");
}
}
