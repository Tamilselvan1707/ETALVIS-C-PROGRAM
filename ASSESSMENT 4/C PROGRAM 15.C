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
    if(a%2==0){
        printf("%d",a);
    }else{
        int h=a-b;
        printf("%d",h);
    }
}