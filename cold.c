#include <stdio.h>

int main() {
    int n, t, T = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t < 0) {
            T++;
        }
    }
    printf("%d", T);

    return 0;
}