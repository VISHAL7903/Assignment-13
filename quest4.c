#include<stdio.h>
int sum_square(int n)
{
    if(n>0)
    {
        return sum_square(n-1)+(n*n);
    }
} 
int sum_square(int);
int main() 
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",sum_square(n));
    return 0;
}