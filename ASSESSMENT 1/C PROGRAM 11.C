#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0,rem;
    while(a>=9){
        rem=a%10;
        sum+=rem;
        a=a/10;
        
    }printf("%d",a+sum);
}