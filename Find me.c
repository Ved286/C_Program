#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j=0,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d",i);
			break;
		}
	}
	if(a[i]!=k)
	{
	for(i=0;i<n;i++)
		{
			if(a[i]>k)
			{
			printf("%d",i);
			break;
			}
			
		}
	}
	for(i=0;i<n;i++)
		{
			if(a[i]<k)
			{
			 j++;
			}	
		}
	if(j==n)
	printf("%d",j);
	
}
