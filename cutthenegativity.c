#include <stdio.h>

int main() {
    /*
      n = number of cities
      m = number of direct flights (cities with positive numbers)
    */
    int n, m;
    int i, j;

    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    m = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] != -1) {
                m++;
            };
        }
    }

    // print how many cities have positive numbers (direct flights)
    printf("%d\n", m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] != -1) {
                // row (location of the city), column (location of the city), city number (positive)
                printf("%d %d %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }

    return 0;
}