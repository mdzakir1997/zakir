#include<stdio.h>
void main()
{
int a;
printf("Enter an number");
scanf("\n%d",&a);
if(a>0)
{
printf("\npositive");
}
else if(a<0)
{
printf("\nnegative");
}
else
{
printf("\nZero");
}
}
