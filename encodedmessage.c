#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
    char message[10001];
    int n, length, i, j, k;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%s\n", message);
        length = (int)sqrt(strlen(message));
        for (j = 0; j < length; j++) {
            for (k = 0; k < length; k++) {
                printf("%c", message[k * length + length - 1 - j]);
            }
        }
        printf("\n");
    }
    return 0;
}