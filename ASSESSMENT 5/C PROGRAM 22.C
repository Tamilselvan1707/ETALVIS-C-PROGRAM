#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int count=0;
    while(a!=0){
        rem=a%100;
        if(rem%2!=0){
            count++;
        }
        a=a/10;
    }printf("%d",count-1);
}