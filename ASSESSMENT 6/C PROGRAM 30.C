#include <stdio.h>

int main() {
    int a, b;
    int i = 1;
    int hcf = 0;
    scanf("%d %d", &a, &b);
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
        i++;
    }
    printf("%d", hcf);
}