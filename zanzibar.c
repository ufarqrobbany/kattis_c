#include <stdio.h>

int main() {
    int T, prev[100], n[100][100], lb[100], i, j;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        lb[i] = 0;
        j = 0;

        scanf("%d", &prev[i]);

        while (scanf("%d", &n[i][j]) && n[i][j] != 0) {
            if (n[i][j] > prev[i] * 2) {
                lb[i] += n[i][j] - prev[i] * 2;
            }
            prev[i] = n[i][j];
            j++;
        }
    }

    for (i = 0; i < T; i++) {
        printf("%d\n", lb[i]);
    }

    return 0;
}
