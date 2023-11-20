#include <stdio.h>

int main() {
    int T, N[10], n, i;

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < T; i++) {
        n = 1;
        for (int j = 1; j <= N[i]; j++) {
            n *= j;
        }
        printf("%d\n", n % 10);
    }

    return 0;
}
