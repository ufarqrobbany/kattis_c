#include <stdio.h>

int main() {
    int N, A[100];
    float c = 0, P;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if ((j + k == A[i])) {
                    c += 1;
                }
            }
        }
    }
    P = c / (6 * 6);

    printf("%f", P);

    return 0;
}