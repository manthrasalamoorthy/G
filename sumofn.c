#include<stdio.h>
void main()
{
int no,sum=0;
printf("enter the number:");
scanf("%d",&no);
for(int i=0;i<=no;i++)
{
sum=sum+i;
}
printf("%d",sum);
}
