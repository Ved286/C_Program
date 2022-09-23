#include<stdio.h>
void main()
{
  int n,i,a,k,sum=1,fact;
  scanf("%d",&n);
  n=k;
  while(k!=0)
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
}
