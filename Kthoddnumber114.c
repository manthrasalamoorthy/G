#include <stdio.h>
int main() 
{
	int n,k,i,arr[10],f=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	   if(arr[i]%2==1)
	   {
	       f++;
	   }
	   if(f==k)
	   {
	       printf("%d is the %dth odd number",arr[i],k);
	       break;
	   }
	}
	return 0;
}
