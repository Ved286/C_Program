#include<stdio.h>
void main()
{
    int i,n,a,fact,sum=0,k;
    scanf("%d",&n);
    n=k;	
    while(n!=0)
    {
        i=k%10;
        k=k/10;
        fact=1;
	    if(i==1 || i==0)
			{
				fact=1;
			}
			
		else
			{
			for(a=1;a<=i;a++)
				{
					fact=fact*a;
				}
			}
		sum=sum+fact;
    }
    printf("%d",sum);
    if(sum==n)
    {
    printf("Yes");
	}
    else
    {
	printf("No");
	}
}
