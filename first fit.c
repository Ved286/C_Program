#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
		printf("%d",a[i]);
		break;
		}
		
	}
		if(a[i]<k)
		printf("-1");
}
