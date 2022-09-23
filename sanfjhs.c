#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int i,j,a[n],b[n],max=0;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n+1-k;i++)
	{	
		b[i]=0;
		for(j=i;j<i+k;j++)
		{			
			b[i]=b[i]+a[j];
			max=b[i];		
		}
		printf("%d %d\n",i,b[i]);
	}
	for(i=0;i<=n+1-k;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("%d",max);
}
