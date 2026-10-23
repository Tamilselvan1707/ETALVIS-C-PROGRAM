#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem=0,b=0;
    while(a!=0){
        rem=a%10;
        b++;
        a=a/10;
    }printf("%d",b);
}