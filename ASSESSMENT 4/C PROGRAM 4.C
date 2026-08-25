#include<stdio.h>
int main(){
    int a=6;
    int sum=0;
    loop:
    if(a>=1){
        sum+=a;
        a--;
        goto loop;
    }printf("%d",sum);
}