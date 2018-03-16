#include <stdio.h>
int main() 
{
	int i,n,k,a[50],cnt=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			cnt++;
		}
	}
	printf("The no .of repeations of K is:%d",cnt);
	return 0;
}
