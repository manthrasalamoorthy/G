#include<stdio.h>
int main()
{
int j,N,K,i,arr[100],t;
scanf("%d %d",&N,&K);
for(i=0;i<N;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<N;i++)
{
for(j=i+1;j<N;j++)
{
if(arr[i]>arr[j])
{
t=arr[i];
arr[i]=arr[j];
arr[j]=t;
}
}
}
printf("%d is the %d smallest element",arr[K-1],K);
return 0;
}
