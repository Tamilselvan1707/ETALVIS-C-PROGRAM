#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=1;
    loop:{
        if(a>=10){
            a=a/10;
            count++;
        goto loop;}
    }printf("%d",count);
}