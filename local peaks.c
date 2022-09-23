#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		if(i==0)
		{
			if(a[i]>a[i+1])
			printf("%d ",i);
		}
		if(i>0&&i<n-1)
		{
			if(a[i]>a[i+1]&&a[i]>a[i-1])
				printf("%d ",i);
		}
		if(i==n-1)
		{
			if(a[i]>a[i-1])
			printf("%d ",i);
		}        
 	}
	
}
