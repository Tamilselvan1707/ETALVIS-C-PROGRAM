#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int rem,d=1;
    int g=a;
    for(b=0;a!=0;a=a/10)
    {
       d=d*10;
    }int c=g%10;
    int e=g/(d/10);
    int h=g/10;
    int i=h%(d/100);
    printf("%d",((((c*(d/100))+i)*10)+e));
}