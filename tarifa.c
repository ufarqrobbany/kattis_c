#include <stdio.h>

int main() {
    int X, N, P, t = 0;

    scanf("%d", &X);
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &P);
        t = t + X - P;
    }
    t += X;
    printf("%d", t);

    return 0;
}