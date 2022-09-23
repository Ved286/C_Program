#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]==n-i-1)
		{
			printf("true");
			break;
		}
	}
	if(i==n)
	i--;
	
	if(a[i]!=n-i-1)
	printf("false");
	
}
