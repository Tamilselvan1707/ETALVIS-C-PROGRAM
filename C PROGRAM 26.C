#include<stdio.h>
int main(){
   int a= 9999;
   while(a!=0){
       if(a%7==0 && a%9==0){
           printf("%d",a);
           break;
       }a--;
   }
}