#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int n,i;
printf("\nEnter the string:");
scanf("%s",str);
printf("\nEnter the k VALUE:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",str);
}
return 0;
}
