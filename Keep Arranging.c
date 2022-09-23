#include<stdio.h>
void main()
{
	float i=1,n,a=1;
	scanf("%f",&n);
	if(n==1)
	{
		printf("%f",a);
	}
	else
	{
		for(i=1;i<n;i++)
		{
			a=a+(1/(i+1));
		}
	}
	printf("Harmonic place upto %.0f decimal place %.4f:",n,a);
}
