#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
     (n >= 1000 && n <= 9999) ?
        (((n % 10) == ((n / 10) % 10)) ? printf("1") : printf("0"))
        :printf("0");
}