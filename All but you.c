#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,k=0,l=0,m=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		l=0;
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
			if(a[i]>a[j])
				{
					k++;
					break;
				}	
			}
		}
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
			if(a[i]<a[j])
			{
				l++;
				break;	
			}	
			}
		}
			if(k==1&&l==1)
			m++;
	}
	printf("%d ",m);
}
