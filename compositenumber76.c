#include<stdio.h>
int main()
{
int num,i,cnt=0;
printf("Enter the number:");
scanf("%d",&num);
for(i=2;i<num/2;i++)
{
if(num%i==0)
{
cnt++;
}
}
if(cnt>0)
printf("YES");
else
printf("NO");
return 0;
}
