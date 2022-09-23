#include<stdio.h>
int x=0;
int gcd(int a,int b);
void main()
{
	int n,i;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{
		x=gcd(x,c[i]);	
	}	
	printf("%d",x);	
}
int gcd(int a,int b)
{
	int i;
	for(i=0;i<=a||i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		x=i;
	}
	printf("%d",x);
	return x;
}
