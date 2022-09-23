#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,k=0,a[n],b[10000],max;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b[k]=a[i]*a[j];
			max=b[k];
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("%d",max);
}
