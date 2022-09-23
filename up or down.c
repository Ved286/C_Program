#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			if(a[i][j]==0)
			a[i][j]=1;
			else
			a[i][j]=0;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}

