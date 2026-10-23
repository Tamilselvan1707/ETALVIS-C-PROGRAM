#include<stdio.h>
int main(){
    int a,rem=0;
    scanf("%d",&a);
    int sum=0;
    while(a!=0){
        rem=a%10;
        if(rem%2!=0){
            sum++;
        }a=a/10;
    }printf("%d",sum);
}