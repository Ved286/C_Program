#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n+1],i,max=0,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=0;
	for(i=1,j=0;i<n+1,j<n;i++,j++)
	{
		{
		b[i]=a[j]-b[j];
		printf("%d\n",b[i]);		
	}
	for(i=0;i<n+1;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("%d",max);
}
