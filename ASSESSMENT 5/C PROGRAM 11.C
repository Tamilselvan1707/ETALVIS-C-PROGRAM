#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
     for(b=0;a!=0;a=a/10)
    {
        b++;
    }
    printf("%d",b);
}