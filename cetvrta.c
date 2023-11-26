#include <stdio.h>

int main() {
    int point[3][2], ux, uy, cx, cy, i, j;

    for (i = 0; i < 3; i++) {
        scanf("%d %d", &point[i][0], &point[i][1]);
    }

    ux = 0;
    uy = 0;
    for (i = 0; i < 3; i++) {
        cx = 0;
        cy = 0;
        for (j = 0; j < 3; j++) {
            if (i != j) {
                if (point[i][0] == point[j][0]) cx++;
                if (point[i][1] == point[j][1]) cy++;
            }
        }

        if (cx == 0) ux = point[i][0];
        if (cy == 0) uy = point[i][1];
    }

    printf("%d %d", ux, uy);

    return 0;
}
