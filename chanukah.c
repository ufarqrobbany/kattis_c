#include <stdio.h>

int main() {
    int P, K[10000], N[10000], i = 0, j = 0;

    scanf("%d", &P);
    while (P--) {
        scanf("%d %d", &K[i], &N[i]);
        i++;
    }
    while (i--) {
        printf("%d %d\n", K[j], N[j] * (N[j] + 3) / 2);
        j++;
    }

    return 0;
}