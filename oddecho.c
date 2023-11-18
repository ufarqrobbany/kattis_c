#include <stdio.h>

int main() {
    int N, i;
    char word[10][100];

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%s", word[i]);
    }

    for (i = 0; i < N; i++) {
        if (i % 2 == 0) {
            printf("%s \n", word[i]);
        }
    }

    return 0;
}