#include <stdio.h>

int main() {
    int N, li, L = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &li);
        L += li;
    }
    L = L - (N - 1);

    printf("%d", L);

    return 0;
}