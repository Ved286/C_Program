#include<stdio.h>
void main()
{
	int a,n,no,sum=0,mul=1,i;
	printf("enter no of digit\n");
	scanf("%d",&no);
	printf("enter yhe no:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		mul=mul*;
		n=n/10;
	}
	printf("%d",mul-sum);
	
}
