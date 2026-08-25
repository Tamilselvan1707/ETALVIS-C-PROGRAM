#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int count=0;
    while(a!=0){
        rem=a%100;
        if(rem==16 || rem==25||rem==36 || rem==49 || rem==64|| rem==81){
            count++;
        }
        a=a/10;
    }printf("%d",count);
}