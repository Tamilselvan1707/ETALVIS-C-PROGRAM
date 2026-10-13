#include<stdio.h>
int main(){
    int x=10;
    int sum=0,rem=0;
    while(x<=99){
        rem=x/10;
            if(x%2!=0){  if(rem==7){
                sum+=x;
            }}
        x++;
    }printf("%d",sum);
}