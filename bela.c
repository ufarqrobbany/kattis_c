#include <stdio.h>

int main() {
    typedef struct {
        char number;
        int dominant;
        int notdominant;
    } Table;
    Table t[8] = {
        {'A', 11, 11},
        {'K', 4, 4},
        {'Q', 3, 3},
        {'J', 20, 2},
        {'T', 10, 10},
        {'9', 14, 0},
        {'8', 0, 0},
        {'7', 0, 0}};
    int N, k = 0, total = 0;
    char B, c[400][2];

    scanf("%d %c", &N, &B);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%s", &c[k++]);
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 8; j++) {
            if (c[i][0] == t[j].number) {
                if (B == c[i][1]) {
                    total += t[j].dominant;
                } else {
                    total += t[j].notdominant;
                }
            }
        }
    }

    printf("%d", total);
    return 0;
}