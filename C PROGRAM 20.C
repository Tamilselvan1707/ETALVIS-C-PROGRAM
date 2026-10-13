#include<stdio.h>
int main(){
    int r=3;
    int b=1;
    while(r<10)
    {
    int sum=0,i=2;
    while(r>2 && i<10)
    {
        if(r%i==0 && r!=i){
            sum++;
            break;
        }
        i++;
    }if(sum==0){
        b++;
    }r++;
    }printf("%d",b);
}