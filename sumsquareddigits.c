#include <stdio.h>

int main() {
    int P, K, b, n, i, R;

    scanf("%d", &P);

    for (i = 0; i < P; i++) {
        scanf("%d %d %d", &K, &b, &n);

        R = 0;
        while (n > 0) {
            R += (n % b) * (n % b);
            n = n / b;
        }

        printf("%d %d\n", K, R);
    }

    return 0;
}