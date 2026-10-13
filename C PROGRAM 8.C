#include<stdio.h>
int main(){
    int x=10;
    int rem=0,y=0;
    while(x<=99){
        rem=x%10;
        y=x/10;
          if(x%2==0){ 
              if(rem+y==6){
                printf("%d\n",x);
            }}
        x++;
    }
}