#include<stdio.h>
void main()
{
int num,rem,low,high,tmp,i;
printf("enter the low and high value:");
scanf("%d%d",&low,&high);
for(i=low+1;i<high;++i)
{
  tmp=i;
  num=0;
while(tmp!=0)
{
rem=tmp%10;
num=num+rem*rem*rem;
tmp=tmp/10;
}
if(i==num)
{
printf("%d",i);
}
}}
