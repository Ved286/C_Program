#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][n],b[n][n],i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0)
			{
				for(k=0;k<n;k++)
				{
					b[i][k]=0;
				}
				for(k=0;k<m;k++)
				{
					b[k][j]=0;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
