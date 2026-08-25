#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int c=0;
    int b=0,rem;
    for(int i=0;i<2;i++){
        rem=n%10;
        b=rem*pow(10,c)+b;
        c++;
        n=n/10;
    }
    if(b<2){
        printf("Not Prime");
    }
    for(int i=2;i<n;i++){
        if(b%i==0){
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