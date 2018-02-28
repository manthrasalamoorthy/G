#include<stdio.h>
int main()
{
int n1,n2,p,i,f=0;
printf("Enter the N1,N2:");
scanf("%d%d",&n1,&n2);
p=n1*n2;
for(i=1;i<=p/2;i++)
{
if(i*i==p)
{
f=1;
break;
}}
if(f==1)
printf("YES");
else
printf("NO");
return 0;
}
