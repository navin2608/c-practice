#include<stdio.h>
struct emp
{
int empid;
int age;
char team[10];
};
int main()
{
struct emp e={1254,20,'barcelona'};
printf("%d",e.age);
}
