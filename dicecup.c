#include <stdio.h>

int main() {
    int N, M, lowest, highest;

    scanf("%d %d", &N, &M);

    lowest = N;
    highest = M;
    if (M < N) {
        lowest = M;
        highest = N;
    }

    for (int i = (lowest + 1); i <= (highest + 1); i++) {
        printf("%d\n", i);
    }

    return 0;
}