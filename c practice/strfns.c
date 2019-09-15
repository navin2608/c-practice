#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="ab";
    char str2[20]="db";
    int c=0;
    char d;
    c=strncmp(str1,str2,1);
    d=strstr(str1,str2);
    printf("%d\n",c);
    printf("%s",d);
    printf("%s",strrev(str1));
}

