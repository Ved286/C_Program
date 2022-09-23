#include<stdio.h>
void main()
{
		int i,j=0,k,l,n,m,s,sum=0,rev=0;
		scanf("%d",&n);
		m=n*n;
		l=n;
		printf("%d\n",m);
		while(n!=0)
		{
			n=n/10;
			j++;
		}
		printf("%d\n",j);
		for(s=0;s<j;s++)
		{
			i=m%10;
			m=m/10;
			sum=10*sum+i;
		}
			printf("%d\n",sum);
		while(sum!=0)
		{
			k=sum%10;
			sum=sum/10;
			rev=10*rev+k;
		}
			printf("%d\n",rev);
		
		if(rev==l)
		printf("Phoniex number");		
		else
			printf("Not a Phoniex number");
}
