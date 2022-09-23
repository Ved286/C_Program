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
			if(a[j]==0)
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
}
