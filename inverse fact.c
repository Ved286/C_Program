#include<stdio.h>
void main()
{
	int i,n,fact=1;
	scanf("%d",&n);
	for(i=1;i<=15;i++)
	{
		fact=fact*i;
		if(fact==n)
		break;
	}
	if(fact==n)
	printf("%d",i);
	else
	printf("-1");
}
