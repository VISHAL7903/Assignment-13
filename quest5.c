#include<stdio.h>
int sum(int n)
{
    if(n>0)
    {
        return sum(n/10)+(n%10);
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