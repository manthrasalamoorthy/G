#include<stdio.h>
int main()
{
int terms,d,frt,sum=0,val,i;
printf("Enter the total no.of terms :");
scanf("%d",&terms);
printf("Enter the first value and difference:");
scanf("%d%d",&frt,&d);
val=frt;
printf("AP serious is:");
for(i=0;i<terms;i++)
{
sum+=val;
val=val+d;

}
printf("%d",sum);
return 0;
}
