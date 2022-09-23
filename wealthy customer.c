#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int a[m][n],i,j,sum[m],max=0;
	for(i=0;i<m;i++)
	{
		sum[i]=0;
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i]+=a[i][j];
			max=sum[i];
		}
	}
	for(i=0;i<m;i++)
	{
		if(sum[i]>max)
		max=sum[i];
	}
	printf("%d",max);
}
