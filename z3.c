#include<stdio.h>
void main()
{
int a;
printf("\nEnter a year");
scanf("%d",&a);
if(a%4==0)
{
printf("\nLeap year");
}
else
{
printf("\nNot a leap year");
}
}
