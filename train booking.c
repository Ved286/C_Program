#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n][3],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    int m;
    scanf("%d",&m);
    int d[m],e[n][3];
    for(j=1;j<=m;j++)
    {
    
        for(i=0;i<n;i++)
        {
        e[i][j]=0;
        }    
    }
    for(i=0;i<n;i++)
    {

        for(j=a[i][0];j<=a[i][1];j++)
        {
        e[i][j]=a[i][2];
        }
    }
    for(j=1;j<=m;j++)
    {
        d[j]=0;
        for(i=0;i<n;i++)
        {
            d[j]=e[i][j]+d[j];
        }
        printf("%d ",d[j]);
    }
}

