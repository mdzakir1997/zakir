#include<stdio.h>
void main()
{
int a,b,c;
scanf("\n%d\t%d\t%d",&a,&b,&c);
if(a>b && a>c)
{
printf("\nA is largest");
}
else if(b>a && b>c)
{
printf("\nB is largest");
}
else
{
printf("\nC is largest");
}
}
