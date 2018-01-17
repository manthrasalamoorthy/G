#include<stdio.h>
void main()
{
int num,res=0,rem,low,high,c;
printf("enter the low and high value:");
scanf("%d%d",&low,&high);
c=num;
for(num=low;num<=high;num++)
{
while(num!=0)
{
rem=num%10;
res=res+rem*rem*rem;
num=num/10;
}
if(c==res)
{
printf("%d",c);
}
}}
