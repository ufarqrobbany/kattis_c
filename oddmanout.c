#include <stdio.h>

int main() {
    int N, G[1000], C[1000][1000], i, j, k, tidaksama[1000];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &G[i]);
        for (j = 0; j < G[i]; j++) {
            scanf("%d", &C[i][j]);
        }
    }

    for (i = 0; i < N; i++) {
        tidaksama[i] = -1;
        for (j = 0; j < G[i]; j++) {
            int isRepeated = 0;
            for (k = 0; k < G[i]; k++) {
                if (j != k && C[i][j] == C[i][k]) {
                    isRepeated = 1;
                    break;
                }
            }

            if (!isRepeated) {
                tidaksama[i] = C[i][j];
                break;
            }
        }

        printf("Case #%d: %d\n", i + 1, tidaksama[i]);
    }

    return 0;
}
