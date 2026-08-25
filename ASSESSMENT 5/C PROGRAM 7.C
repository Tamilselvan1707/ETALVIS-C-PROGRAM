#include<stdio.h>
int main(){
    for(int i=10;i<=99;i++){
        int b=i/10;
        int c=i%10;
        if(i%2!=0){
            if(b+c==7)
            {
            printf("%d\n",i);
        }
    }
      
    }
}