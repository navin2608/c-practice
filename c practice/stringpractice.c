#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="navin";
    char b[20]="nud";
    int c=strlen(b);
    printf("%d\n",strncmp(a,b,2));
    printf("%d",c);
}
