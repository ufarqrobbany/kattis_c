#include <stdio.h>

int main() {
    int points[5] = {0}, winnerP, winnerI, i, j;
    int grades[5][4];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &grades[i][j]);
            points[i] += grades[i][j];
        }
    }

    winnerP = points[0];
    winnerI = 1;
    for (i = 0; i < 5; i++) {
        if (winnerP < points[i]) {
            winnerP = points[i];
            winnerI = i + 1;
        }
    }

    printf("%d %d", winnerI, winnerP);

    return 0;
}