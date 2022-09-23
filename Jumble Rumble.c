#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d",&n);
	int a[n],b[n],i,j,l=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d ",a[i],b[i]);
	}
}
