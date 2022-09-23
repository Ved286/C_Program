#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int sum=0,a[n],i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			printf("%d\n",sum);
			if(sum==k)
			{
			break;
			}
			
		}
		if(sum==k)
		break;
	}
	if(sum==k)
	printf("true");
	else
 	printf("false");
}
