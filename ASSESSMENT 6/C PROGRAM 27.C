#include<stdio.h>
int main(){
   int a= 100000;
   int rem=0,b=0,sum=0;
  while(a!=0){
      int d=a;
      b=0;
   while(d!=0){
       rem=d%10;
       b+=rem;
       d=d/10;
   } 
   if(b==14){
       sum++;
       
   }
       a--;
      
  }printf("%d",sum);
}