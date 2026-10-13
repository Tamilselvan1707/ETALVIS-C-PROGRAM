#include <stdio.h>

int main() {
    int a, b;
    int i = 1, j = 1;
    int mul1, mul2;

    scanf("%d %d", &a, &b);

    while (1) {
        mul1 = a * i;
        mul2 = b * j;

        if (mul1 == mul2) {
            printf("%d", mul1);
            break;
        }
        else if (mul1 < mul2) {
            i++;
        }
        else {
            j++;
        }
    }

    return 0;
}