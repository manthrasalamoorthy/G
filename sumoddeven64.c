#include<stdio.h>
int main()
{
int n,m,res;
printf("Enter the N,M value:");
scanf("%d%d",&n,&m);
printf("N=%d ,M=%d",n,m);
res=n+m;
printf("\nThe sum is %d",res);
if(res%2==0)
printf("\nEVEN");
else
printf("\nODD");
return 0;
}
