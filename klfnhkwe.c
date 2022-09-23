#include<stdio.h>
void main()
{
	int i,a,c,n,count,sum;
	scanf("%d",&n);
	for(i=1;;i++)
		{
			c=i;
			sum=0;
			while(c!=0)
			{
				a=c%10;
				sum=sum+a;
				c=c/10;
			}
			if(sum==11)
			{
			count++;
			}
			if(count==n)
			{
				printf("%d\n",i);
				break;
			}
		}
}
