#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k]
                                           == 0)
                    {
                        Console.Write(arr[i]);
                        Console.Write(" ");
                        Console.Write(arr[j]);
                        Console.Write(" ");
                        Console.Write(arr[k]);
                        Console.Write("\n");
                        found = true;
                    }
                }
            }
        }
    if(found==true)
    printf("True");
    else
    printf("False")
}
