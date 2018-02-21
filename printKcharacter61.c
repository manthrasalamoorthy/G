#include<stdio.h>
int main()
{
char str[100];
int k,i;
printf("\nEnter the string:");
scanf("%s",str);
printf("\nEnter the K value:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("\n %c",str[i]);
}
return 0;
}
