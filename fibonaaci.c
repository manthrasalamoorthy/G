#include<stdio.h>
int main()
{ 
    int a=0,b=1,c,n,i;
    printf("Enetr the number :");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
    a=b;
    b=c;
    c=a+b;
    printf("%d",c);
    }
return 0;
}
