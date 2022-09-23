#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k=0,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			k=k+1;
		}
		if(k==1)
		printf("%d ",a[i]);
	}
	
}
