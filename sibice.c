#include <stdio.h>

int main() {
    int N, W, H, V, l[50], i;

    scanf("%d %d %d", &N, &W, &H);

    for (i = 0; i < N; i++) {
        scanf("%d", &l[i]);
    }

    V = (W * W + H * H);

    for (i = 0; i < N; i++) {
        if (l[i] * l[i] <= V) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }

    return 0;
}