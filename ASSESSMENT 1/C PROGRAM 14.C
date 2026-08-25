#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0,rem;
    if(a<=9999){while(a!=0){
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
        
    }printf("%d",sum);
    }}