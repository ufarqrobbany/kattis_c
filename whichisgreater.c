#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d", &a, &b);
    c = (a > b) ? 1 : 0;
    printf("%d", c);

    return 0;
}