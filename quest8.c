#include<stdio.h>
int fib(int x)
{
    if(x==0 || x==1)
    return x;
    return fib(x-1) + fib(x-2);
}
int fib(int);
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",fib(i));
    return 0;
}