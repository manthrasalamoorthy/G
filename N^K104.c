#include<stdio.h>
int main()
{
int n,k,res=1,i;
printf("Enter the value of N,K:");
scanf("%d%d",&n,&k);
for(i=1;i<=k;i++)
{
res=res*n;
}
printf("%d",res);
return 0;
}
