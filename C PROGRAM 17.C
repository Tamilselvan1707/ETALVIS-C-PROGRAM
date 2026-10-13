#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0,i=2;
    int rem=0,b=0;
    while(a>2 && i<10){
        if(a%i==0 && a!=i){
            sum++;
            break;
        }
        i++;
    }while(a!=0){
        rem=a%10;
        b+=rem;
        a=a/10;
        
    }
        if(sum==0){
            if(b==14){
      printf("Prime & sum of digits is 14");  
           } else{
      printf("Prime & sum of digits is not 14");  
    }}
    else{
         if(b==14){
      printf("Not Prime & sum of digits is 14");  
        } else{
      printf("Not Prime & sum of digits is not 14");  
    }}
}