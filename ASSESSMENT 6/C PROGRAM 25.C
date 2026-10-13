#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d=a,rem=0,sum=0;
    int n=1;
    while(a!=0){
        rem=a%10;
            if(rem==2 || rem==3||rem==5||rem==7){
                sum++;
            }
        a=a/10;
        n++;
    }printf("%d",sum);
}