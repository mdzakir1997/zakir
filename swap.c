#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter two numbers\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n%d\t%d",a,b);
}
