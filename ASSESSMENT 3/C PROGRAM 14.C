#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a/100;
    int c=a%100;
    if(b==c) printf("Success");
    else printf("Failure");
}