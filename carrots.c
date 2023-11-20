#include <stdio.h>

int main() {
    int N, P;
    const char *desc[100];

    scanf("%d %d", &N, &P);
    for (int i = 0; i < N; i++) {
        scanf("%s", desc[i]);
    }
    printf("%d", P);

    return 0;
}