#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]+1==a[j])
			{
			k++;
			break;
			}
		}
	}	
	printf("%d",k);
	
	
}
