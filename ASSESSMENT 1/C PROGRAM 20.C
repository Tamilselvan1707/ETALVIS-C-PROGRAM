#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem,b=0;
    int d=a;
    while(a!=0){
        rem=a%10;
        b+=rem;
        a/=10;
    }a=a%10;
    (b%2!=0) ? printf("%d",d-5) : printf("%d",d);
}