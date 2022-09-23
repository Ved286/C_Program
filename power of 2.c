#include<stdio.h>
void main()
{
	int l=1,k,n;
	scanf("%d",&n);
	k=n;
	if(k!=0)
	{
		while(k!=2)
		{
			if(k%2==0)
			{
				k=k/2;
				l++;
			}
			else
			{
				break;
			}
		}
	}	
	else
	l=0;
	printf("%d",l);
}
