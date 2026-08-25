#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int b=a%10;
    while(a!=0){
        rem=a%10;
        a=a/10;
    }printf("%d",rem+b);
}