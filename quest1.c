#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
} 
int sum(int);
int main() 
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
