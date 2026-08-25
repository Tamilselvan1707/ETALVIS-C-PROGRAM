#include<stdio.h>
int main(){
    int a;
    int sum=1;
    for(a=3;a<10;a++){
        int count=0;
        for(int i=2;i<a;i++){
            if(a%i==0){
                count++;
                break;
            }
        }if(count==0){
            sum++;
        }
    }printf("%d",sum);
}