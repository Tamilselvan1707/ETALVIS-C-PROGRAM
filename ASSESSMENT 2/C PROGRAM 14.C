#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A = n / 100;
    int B = n % 100;
    (A == B) ? printf("1") : printf("0");
}