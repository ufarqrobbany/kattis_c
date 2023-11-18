#include <stdio.h>

int main() {
    int G, T, N, w[500], total_w = 0, w_trailer;

    scanf("%d %d %d", &G, &T, &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &w[i]);
        total_w += w[i];
    }
    w_trailer = ((G - T) * 0.9) - total_w;
    printf("%d", w_trailer);

    return 0;
}