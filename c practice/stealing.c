#include<stdio.h>
int main()
{
    int n,a[20],sum=0,sum2=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n;j+=2)
    {
        sum+=a[j];
    }
    for (int k=1;k<n;k+=2)
    {
        sum2+=a[k];
    }
    if (sum>sum2)

        printf("%d",sum);
    else
        printf("%d",sum2);


}
