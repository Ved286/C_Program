#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=i&&a[i]%2==0)
			{	
				if(a[i]/2==a[j])
				{
					printf("true");
					break;
				}
			}
		}
		if(a[i]/2==a[j])
		{
			break;
		}
	}
	if(a[i]/2!=a[j])
	printf("false");
	
}
