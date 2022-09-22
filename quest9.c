#include<stdio.h>
int count_digit(int);
int main()
{
    int n;
    printf("Enter any number = ");
    scanf("%d",&n);
    printf("total digits is %d ",count_digit(n));
    return 0;
}
int count_digit(int n)
{
    static int count=0;
    if(n>0)
    {
        count_digit(n/10);
       count++;  
    }
    return count;
}