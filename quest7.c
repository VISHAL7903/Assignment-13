#include<stdio.h>
int hcf(int x, int y)
{
    if(y==0)
    return x;
    return hcf(y,x%y);
}
int hcf(int, int );
int main()
{
    int x,y;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    printf("HCF = %d",hcf(x,y));
    return 0;
}