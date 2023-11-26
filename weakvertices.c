#include <stdio.h>

int main() {
    int f, n, arr[100][100], weak, i, j, k;

    f = 1;
    while (f != 0) {
        scanf("%d", &n);
        if (n == -1) {
            f = 0;
            break;
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &arr[i][j]);
            }
        }

        for (i = 0; i < n; i++) {
            weak = 1;
            for (j = 0; j < n; j++) {
                for (k = 0; k < n; k++) {
                    if ((arr[i][j] == 1) && (arr[i][k] == 1) && (arr[j][k] == 1) && (i != j) && (i != j) && (j != k)) {
                        weak = 0;
                    }
                }
            }

            if (weak == 1) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}