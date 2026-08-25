#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem,B=0,count=0;
    loop:{
        if(a!=0){
            rem=a%10;
           B=B*10+rem;
            a=a/10;
        goto loop;}
    }printf("%d",B);
}