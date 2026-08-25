#include<stdio.h>
int main(){
    int sum=0;
    for(int i=10;i<=99;i++){
       if(i%2!=0){ 
           int b=i/10;
        
            if(b==7)
            {
            sum+=i;
        }
    }}
      printf("%d",sum);
    }
