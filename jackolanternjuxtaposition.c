#include <stdio.h>

int main() {
    int N, T, M;

    scanf("%d %d %d", &N, &T, &M);

    if ((N >= 1 && N <= 500) && (T >= 1 && T <= 500) && (M >= 1 && M <= 500)) {
        printf("%d", N * T * M);
    }

    return 0;
}