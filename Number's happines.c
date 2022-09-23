#include<stdio.h>
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int a[231],j=1,k;
	a[0]=0;
	while(n!=1)
	{
		if(n<=231)
		{
		sum=0;
		while(n!=0)
		{	
			i=n%10;
			n=n/10;
			sum=sum+(i*i);
		}
		n=sum;
		printf("%d\n",sum);
			a[j]=n;
		for(k=0;k<j-1;k++)
		{
			if(a[j]==a[k])
			break;
		}
		if(a[j]==a[k])
			break;
		
		}
		if(a[j]==a[k])
			break;
		j++;
	}
	if(sum==1)
	printf("true");
	else
	printf("false");
}
