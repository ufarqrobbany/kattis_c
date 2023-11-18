#include <stdio.h>

int main() {
    int a, b, c, lpm;

    scanf("%d %d %d", &a, &b, &c);

    lpm = c - a - b;

    printf("%d", lpm);

    return 0;
}