#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem,b=0;
        while(a!=0){
            rem=a%10;
            b+=rem;
            
            a=a/10;
        }
    printf("\n%d",b);
}