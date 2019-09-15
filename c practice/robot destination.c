#include<stdio.h>
ways(int,int);
int main()
{
    int m=0,n=0;
    scanf("%d ,%d",&m,&n);
   printf("%d", ways(m,n));
}
int ways(int a,int b)
{
    if (a==1 || b==1)
        return 1;
    else
        return ways(a-1,b) +ways(a,b-1);
}

