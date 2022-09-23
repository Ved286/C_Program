#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			printf("%d",a[i]);
			break;
		}
	}
	if(i!=a[i])
	printf("-1");
}
