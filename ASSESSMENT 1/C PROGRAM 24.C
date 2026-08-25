#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int e=a/100;
    int c=a%100;
    int b=e/10;
    int d=e%10;
    int g=((d*10)+b);
    printf("%d",(g*100)+c);
}