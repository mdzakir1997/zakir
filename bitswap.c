#include<stdio.h>
void main()
{
int y,z;
printf("\n Enter two numbers\n");
scanf("%d%d",&y,&z);
(y^=z),(z^=y),(y^=z);
printf("\n%d\t%d",y,z);
}
