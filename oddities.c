#include <stdio.h>

int main() {
    int n, x[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (int j = 0; j < n; j++) {
        if (x[j] % 2 == 0) {
            printf("%d is even\n", x[j]);
        } else {
            printf("%d is odd\n", x[j]);
        }
    }

    return 0;
}