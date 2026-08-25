#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1000 && n <= 9999)
    {
        int A = n % 10;
        int B = (n / 10) % 10;
        (A == B) ? printf("Success") : printf("Failure");
    }
}