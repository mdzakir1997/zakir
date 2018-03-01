#include<stdio.h>
void main()
{
int a,i;
printf("Enter a number\n");
scanf("%d",&a);
i=a;
while(i!=0)
{
if(i%10==0)
{
printf("%d",i);
break;
}
i++;
}
}
