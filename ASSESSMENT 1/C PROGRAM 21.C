    #include<stdio.h>
    int main(){
        int a;
        scanf("%d",&a);
        int rem,b=0;
        int d=a;
        int e=d;
        while(a>=9){
            a=a/10;
        } d=d%10;
        (a%2!=0 && d%2!=0) ? printf("%d",e-5) : printf("%d",e);
    }