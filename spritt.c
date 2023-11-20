#include <stdio.h>

int main() {
    int n, x, a, A = 0;

    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        A += a;
    }

    if (A > x) {
        printf("Neibb\n");
    } else {
        printf("Jebb\n");
    }

    return 0;
}