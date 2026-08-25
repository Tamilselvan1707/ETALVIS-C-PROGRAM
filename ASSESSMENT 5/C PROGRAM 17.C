#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=n;
    int count=0;
    if(n<2){
        printf("Not Prime");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }int rem,sum=0;
    while(a!=0){
        rem=a%10;
        sum+=rem;
        a=a/10;
    }
    if(count==0){
        if(sum==14){
            printf("Prime & sum of digit is 14");
        }else{
            printf("Prime & sum of the digit is not 14");
        }
    }
    else{
    if(sum==14){
            printf("Not Prime & sum of digit is 14");
        }else{
            printf("Not Prime & sum of the digit is not 14");
        }
    }
}