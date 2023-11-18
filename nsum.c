#include <stdio.h>

int main() {
    int N, In, sum = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &In);
        sum += In;
    }
    printf("%d", sum);

    return 0;
}