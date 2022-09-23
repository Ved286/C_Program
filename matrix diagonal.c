#include<stdio.h>
void main()
{
	int i,n,j,sum=0;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum=sum+a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		int k=n-1;
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i][k];
			k--;
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum=sum+b[i][j];
		}
	}
	if(n%2==0)
	printf("%d",sum);
	else
	printf("%d",sum-a[n/2][n/2]);
	
}
