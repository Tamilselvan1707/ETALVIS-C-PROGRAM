#include<stdio.h>
int main(){
    int big=0;
    int rem;
    for(int i=0;i<100000;i++)
    {
        int sum=0;
        int temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            temp=temp/10;
            
        }
            if(sum==14)
            {
            big++;;
        }
    }printf("%d",big);
}