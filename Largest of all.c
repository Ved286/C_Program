#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,g,max,max1=0;

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		max=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}

	for(i=0;i<n;i++)
	{
		if(a[i]!=max)
		{
		if(a[i]>max1)
		max1=a[i];
		}
	}

	g=2*max1;

	if(max>g)
	{
	printf("true");
	}
	if(max<=g)
	{
	printf("false");
	}
}
