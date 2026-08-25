#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rem;
    int count;
    while(a!=0)
    {
        count=0;
        rem=a%10;
        
            if(rem<2)
            {
                a=a/10;
                continue;
            }
            else
            {
                for(int i=2;i<rem;i++)
                {
                    if(rem%i==0)
                    {
                       count++;
                        break;
                    }
                }
                if(count==0){
                    printf("%d ",rem);
                }
            }
        
        
        a=a/10;
    }
}