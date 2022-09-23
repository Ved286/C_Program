#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,max=0,j,k=0,l;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=n*n;
	int b[l];
	for(i=0;i<l;i++)
	{
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				b[k]=a[i]+a[j]+(i-j);
				k++;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("%d",max);
}
