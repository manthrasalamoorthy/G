#include<stdio.h>
int main()
{
int hr1,hr2,m1,m2;
printf("Enter the hours:");
scanf("%d%d",&hr1,&hr2);
printf("Enter the min:");
scanf("%d%d",&m1,&m2);
printf("Noe the time is %dhrs:%dmins",hr1-hr2,m1-m2);
return 0;
}
