#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf(" A is greatest");
}
elseif(b>c)
{
printf("B is greatest");
}
else
{
printf("C is greatest");
}
getch();
}
