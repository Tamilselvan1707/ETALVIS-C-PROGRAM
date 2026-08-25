#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    int rem;
    for(b=0;a!=0;a=a/10)
    {
        rem=a%10;
        b=b*10+rem;
    }
    printf("%d",b);
}