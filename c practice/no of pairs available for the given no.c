#include<stdio.h>
int main()
{
    int a,b,a1[20],i,j,n,sum=0,count=0;

    scanf("%d%d", &a ,&b);
    n=-b;
    for (i=0;i<a;i++)
    {
        scanf("%d",&a1[i]);
    }
    for (j=0;j<a-1;j++)
    {
        for (int k=j+1;k<a;k++)
        {
            printf("%d %d\n",a1[j],a1[k]);
            sum=a1[j]-a1[k];
            if (sum==b |sum==n )
                count+=1;
        }
    }
    printf(":%d",count);
}
