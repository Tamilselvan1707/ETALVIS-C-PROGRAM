#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d=a%10;
    while(a>9){
        a=a/10;
    }
       printf("%d",(a*100)+d);
}