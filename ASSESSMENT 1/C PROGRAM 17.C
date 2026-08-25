#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=999){while(a>100){
        a=a/10;
    }
    printf("%d",(a*10)+2);
}}