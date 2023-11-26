#include <stdio.h>

int main() {
    int W, L, N, w, l, V, i;

    scanf("%d", &W);
    scanf("%d", &N);

    V = 0;
    for (i = 0; i < N; i++) {
        scanf("%d %d", &w, &l);
        V += w * l;
    }

    L = V / W;
    printf("%d", L);

    return 0;
}