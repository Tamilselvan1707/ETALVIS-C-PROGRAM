#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int count=0;
    while(a!=0){
        rem=a%10;
        if(rem==1 || rem==4||rem==9){
            count++;
        }
        a=a/10;
    }printf("%d",count);
}