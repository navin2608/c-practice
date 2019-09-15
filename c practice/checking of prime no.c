#include<stdio.h>
int main()
{
  int a,n;
  scanf("%d",&a);
  for (int i=2;i<=a/2;i++)
  {
    if (a%i==0)
    {
        n=1;
      break;
    }
  }
  if (n==1)
  {
    printf("not a prime no");
  }

    else
    {
    printf(" prime no");
  }
  }
