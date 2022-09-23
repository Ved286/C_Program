#include<stdio.h>
void main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j,k=0,a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==a[i+1][j+1]||a[i][j]==a[i-1][j-1])
			k++;
		}
	}
	if(k==(n*m-2))
	printf("true");
	else
	printf("false");
}
