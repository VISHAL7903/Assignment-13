#include<stdio.h>
int fact(int n)
{
    if (n==0)
    return 1;
    return n*fact(n-1);

}
int fact(int);
int main() 
{
    int n;                                                                         
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}