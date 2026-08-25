#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int n=a/10;
    int m=n%100;
    int count=0;
    if(m<2){
        printf("Not Prime");
    }else{
        for(int i=2;i<m;i++){
            if(m%i==0){
                count++;
                break;
            }
        }
    }if(count==0){
        printf("Prime");
    }else{
        printf("Not prime");
    }
}