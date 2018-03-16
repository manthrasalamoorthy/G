#include<stdio.h>
int main()
{
long int n1,n2,count=0,p,t,sum ;
scanf("%ld %ld",&n1,&n2);
t=n2;
while(n2!=0)
{
n2=n2/10;
count++;
}
p=(pow(10,count));
n1=n1*p;
sum=n1+t;
printf("%ld",sum);
return 0;
}
