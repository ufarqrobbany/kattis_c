#include <stdio.h>

int main() {
    int PM[6] = {1, 1, 2, 2, 2, 8}, ps[6];

    for (int i = 0; i < 6; i++) {
        scanf("%d", &ps[i]);
    }
    for (int j = 0; j < 6; j++) {
        printf("%d ", (PM[j] - ps[j]));
    }

    return 0;
}