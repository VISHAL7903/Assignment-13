#include<stdio.h>
int sum_odd(int n)
{
    if(n>0)
    {
        return sum_odd(n-1)+(2*n-1);
    }
} 
int sum_odd(int);
int main() 
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",sum_odd(n));
    return 0;
}