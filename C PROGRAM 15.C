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
    if(a%2==0){
        printf("%d",d);
    }
    else{
        int rem1=d/pow(10,sum-1);
        int rem2=rem1-1;
        int rem3=d%(int)pow(10,sum-1);
        int rem4= rem2*pow(10,sum-1) +rem3;
        printf("\n%d",rem4);
    }
}