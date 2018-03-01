#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c=0,i,n;
    clrscr();
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("enter n value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d\n",c);
    }
    getch();
}
