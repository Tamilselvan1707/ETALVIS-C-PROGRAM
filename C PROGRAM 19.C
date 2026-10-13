#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int f=a%1000;
    int r=f/10;
    int sum=0,i=2;
    while(r>2 && i<10){
        if(r%i==0 && r!=i){
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