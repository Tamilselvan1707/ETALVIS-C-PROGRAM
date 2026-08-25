#include<stdio.h>
int main(){
    int a=10;
    loop:
    if(a<=99){
       if(a%2!=0) {
           int b=a/10;
           int c=a%10;
           if((b+c)==7){
               printf("%d\n",a);
           }
       }
     
       a++;
        goto loop;
    }
}