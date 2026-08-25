#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem, count=0;
    loop:{
        if(a!=0){
            rem=a%10;
            count+=rem;
            a=a/10;
        goto loop;}
    }printf("%d",count);
}