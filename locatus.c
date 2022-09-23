#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j=-1,l=-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
		j=i;
		break;
		}
	}
	if(j!=-1)
	{
		for(i=j;i<n;i++)
		{
			if(a[i]!=k)
			{
			l=i-1;
			break;
			}
		}
	}
	printf("%d %d",j,l);
}

