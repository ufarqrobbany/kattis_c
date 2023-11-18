#include <stdio.h>

int main() {
    int x, y, quadrant;

    scanf("%d", &x);
    scanf("%d", &y);

    if (y > 0) {
        quadrant = (x > 0) ? 1 : 2;
    } else {
        quadrant = (x > 0) ? 4 : 3;
    }

    printf("%d", quadrant);

    return 0;
}