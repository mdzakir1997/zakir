#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter the num\n");
    scanf("%d",&a);
    if(a%7==0)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
    getch();
}
