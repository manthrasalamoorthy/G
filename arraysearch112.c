#include <stdio.h>
int main() 
{
	int i,n,k,a[50],f=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\nYES");
	}
	else
	{
		printf("\nNO");
	}
	return 0;
}
