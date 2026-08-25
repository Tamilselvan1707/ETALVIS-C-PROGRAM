#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    if(n<2){
        printf("Not Prime");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }if(count==0){
        printf("Prime");
    }
    else{
    printf("Not Prime");
    }
}