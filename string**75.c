#include<stdio.h>
#include<string.h>
int main()
{
int n;
char a[10];
printf("Enter the string:");
scanf("%s",a);
n=strlen(a);
if(n%2==0)
{
a[n/2]='*';
a[(n/2)-1]='*';
printf("%s",a);
}
else
{
a[n/2]='*';
printf("%s",a);
}
return 0;
}

