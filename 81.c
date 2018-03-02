#include<stdio.h>
int main()
{
int i,n1,n2;
printf("Enter the N1,N2 values:\n");
for(i=0;i<3;i++)
{
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
printf("%d\n",n1-n2);
}
else
{
printf("%d\n",n2-n1);
}}
return 0;
}
