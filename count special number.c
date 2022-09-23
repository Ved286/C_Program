#include<stdio.h>
void main()
{
	int n,k,a[n],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		printf("%d ",sum);
	}
}
