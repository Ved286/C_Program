#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,l,m,b=0,a[n][n];
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
			int k=0;
			for(m=0;m<n;m++)
			{
				l=i;
				if(a[i][j]>=a[l][m])
				k++;
			}
			for(m=0;m<n;m++)
			{
				l=i;
				if(a[i][j]>=a[m][l])
				k++;
			}
			if(k==2*n)
			b++;
		}
	}
	printf("%d",b);
}
