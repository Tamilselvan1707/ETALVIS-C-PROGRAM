#include<stdio.h>
int main(){
    int a,b,d=1;
    scanf("%d",&a);
     int g=a;
    for(b=0;a!=0;a=a/10){
        d=d*10;
    }int c=g%(d/10);
    int e=g/(d/10);
    if(g%2==0) printf("%d",g);
    else printf("%d",(((e-1)*(d/10))+c));
}