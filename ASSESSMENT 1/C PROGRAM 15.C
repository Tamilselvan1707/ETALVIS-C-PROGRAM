#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=99){while(a>10){
        a=a/10;
    }
    printf("%d",a*10);
}}