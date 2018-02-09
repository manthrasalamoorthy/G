#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int n1,n2;
printf("Enter the two strings:");
scanf("%s%s",&str1,&str2);
n1=strlen(str1);
n2=strlen(str2);
if(n1==n2)
printf("%s",str1);
else if(n1>n2)
printf("%s",str1);
else if(n2>n1)
printf("%s",str2);

return 0;
}
