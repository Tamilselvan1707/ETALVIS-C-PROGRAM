#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int d=a,rem=0,sum=0;
    int rem2=0,rem3=0;
    while(a!=0){
        rem=a%10;
        sum++;
        a=a/10;
    }
    int n=sum-2;
    int b=0;
    while(d>10 && n>=0){
        rem2=d/pow(10,n);
        rem3=d %   ( (int)pow(10,n+1));
        if(rem2==16||rem2==25||rem2==36||rem2==49||rem2==64||rem2==81){
            b++;
            
        }d=rem3;
        n-=1;
    }printf("%d",b);
   
   
}