#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d",i);
			break;
		}
	}
}
