#include<stdio.h>
int main()
{
	int x,i,a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d",a,b);	
	for(i=0;i<=a;++i)
	{
		printf(" %d",i);
		if(a%i==0 && b%i==0)
		x=i;
	}
	printf("%d",x); 
	return 0;
}


