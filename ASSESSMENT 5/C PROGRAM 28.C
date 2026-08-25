#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int sum=0;
    for(int i=1;i<10;i++){
        int mul1=i*a;
        for(int j=1;j<10;j++){
            int mul2=j*b;
            if(mul1==mul2){
                printf("%d ",mul1);
                return 0;
            }
       }
    }
}