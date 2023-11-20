#include <stdio.h>

int main() {
    int n, x, y, X = 0, Y = 0, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        X += x;
    }
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &y);
        Y += y;
    }
    printf("%d", X - Y);

    return 0;
}