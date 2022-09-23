#include<stdio.h>
void main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;)
	{
		if(i%2==1)
		{
		sum=sum+i;
		i++;
		}
	}
	printf("%d",sum);
}
