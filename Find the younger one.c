// 5 81223  4 0 1 1 2 //
#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],i,j,k=0,m=0;
	for(i=0;i<n;i++)	
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
			m=0;
			k=0;
		for(i=0;i<n;i++)	
		{
			if(j!=k)
			{
			if(a[j]>a[k])
			{
			m++;
			}
			}
			k++;
		}
			b[j]=m;
	}
		for(i=0;i<n;i++)	
	{
		printf("%d ",b[i]);
	}
}
