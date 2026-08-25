#include<stdio.h>
int main(){
    int big=0;
    for(int i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){
            big=i;
        }
    }printf("%d",big);
}