#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    int c=a%10;
    for(b=0;a!=0;a=a/10)
    {
        sum+=b;
        b++;
    }
    printf("%d",sum+c);
}