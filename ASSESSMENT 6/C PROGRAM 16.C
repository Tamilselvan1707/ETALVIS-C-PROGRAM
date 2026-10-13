#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int sum=0,i=2;
    while(a>2 && i<10){
        if(a%i==0 && a!=i){
            sum++;
            break;
        }
        i++;
    }if(sum==0){
      printf("Prime");  
    }
    else{
        printf("Not Prime");
    }
}