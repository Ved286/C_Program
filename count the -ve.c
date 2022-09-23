#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	char a[n][n];
	int i,j,k=0;
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
			if(a[i][j]<0)
			k=k+1;
		}
	}
	printf("%d",k);
}
