#include<stdio.h>
int main()
{
    int  a;
    scanf("%d",&a);
    int d=a;
    int rem=0,sum=0;
    while(a!=0){
        rem=a%10;
        sum++;
        a=a/10;
    }
    int rem1=d%10;
    printf("\n%d",rem1);
    int rem2=d/(pow(10,sum-1));
    int rem3=d % (int)pow(10,sum-1);
    int rem4= rem3/10;
    int rem5=rem1*pow(10,sum-1);
    int rem6=rem5+ (rem4*10) + rem2;
    printf("\n%d",rem6);
    
}