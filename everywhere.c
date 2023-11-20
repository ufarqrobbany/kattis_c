#include <stdio.h>
#include <string.h>

int main() {
    int T, n[100], H;
    char city[100][100][100];
    char reserved_c[100][100];

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &n[i]);
        for (int j = 0; j < n[i]; j++) {
            scanf("%s", city[i][j]);
        }
    }

    for (int i = 0; i < T; i++) {
        H = 0;
        for (int j = 0; j < n[i]; j++) {
            int isReserved = 0;
            for (int k = 0; k < H; k++) {
                if (strcmp(city[i][j], reserved_c[k]) == 0) {
                    isReserved = 1;
                    break;
                }
            }
            if (!isReserved) {
                strcpy(reserved_c[H], city[i][j]);
                H++;
            }
        }
        printf("%d\n", H);
    }

    return 0;
}
