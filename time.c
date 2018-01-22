#include<stdio.h>
int main()
{
int min,hr,min1;
printf("Enter the minutes:");
scanf("%d",&min);
hr=min/60;
min1=min%60;
printf("%d%d",hr,min1);
return 0;
}
