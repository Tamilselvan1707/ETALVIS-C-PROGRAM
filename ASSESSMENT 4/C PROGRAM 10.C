#include<stdio.h>
int main(){
    int a=10;
    int sum=0;
    loop:
    if(a<=99){
       if(a%2!=0) {
           int b=a/10;
              if(b==7){
                  sum+=a;
              }
       }
     
       a++;
        goto loop;
    }printf("%d",sum);
}