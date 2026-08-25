#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d=a;
    while(a>100){
        a=a/10;
    }a=a%10;
    (a%2!=0) ? printf("%d",d-5) : printf("%d",d);
}