#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=2,count=0;
    if(a<2){
        printf("Not Prime");
    }
loop:
    if(b<=a/2){
        if(a%b==0){
            count=1;
            goto end;
        }
        b++;
        goto loop;
    }
end:
    if(count==0)
        printf("Prime");
    else
        printf("Not Prime");
}
