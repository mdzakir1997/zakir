#include<stdio.h>
void main()
{
int a,b,z;
printf("\n Enter two numbers\n");
scanf("%d%d",&a,&b);
z=a;
a=b;
b=z;
printf("\n%d\t%d",a,b);
}
