#include<stdio.h>
void main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		printf("FizzBuzz ");
		else if(i%3==0)
		printf("Fizz ");
		else if(i%5==0)
		printf("Buzz ");
		else
		printf("%d ",i);
	}
}
