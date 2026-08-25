#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=1;
    c=a;
loop:
    if(c>=10)
    {
        b=b*10;
        c=c/10;
        goto loop;
    }
    d=a/b;
    e=a%10;
    f=a%b;
    f=f/10;
    printf("%d",e*b+f*10+d);
}