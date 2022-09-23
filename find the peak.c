#include<stdio.h>
void main()
{
	int j,i,n;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k=0,max;
	for(i=1;i<n-1;i++)
	{
		j=i;
		if(a[j]>a[j-1] && a[j]>a[j-1])
		{
		b[k]=i;
		a[b[k]]=max;
		k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(a[b[k]]>max)
		max=a[b[k]];
	}
	for(i=0;i<n;i++)
	{
		if(max==a[i])
		printf("%d",i);
	
	}
	
}
