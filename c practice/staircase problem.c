#include<stdio.h>
int ways(int);
int main()
{
    int n;

    scanf("%d",&n);
   printf("%d", ways(n));
}
    int ways(int a)
    {
        if  (a==0 | a==1)
            return 1;
        else
        return (ways(a-2)+ways(a-1));
    }
