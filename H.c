#include<stdio.h>
void main()
{
int yr;
printf("enter the year:");
sacnf("%d",&yr);
if(yr%400==0||yr%4==0)
{
printf("leap year");
}
else
{
printf("not a leap year");
}
}

