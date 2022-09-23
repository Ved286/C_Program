#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n*n],i,j,k=0,l=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i]*a[i];
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",b[i]);		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			c[l]=b[i]+b[j];
			printf("%d ",c[l]);
			l++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			if(b[i]==c[j])
			break;
		}
		if(b[i]==c[j])
		break;
	}
	if(b[i]==c[j])
	printf("true");
	else
 	printf("false");
}
