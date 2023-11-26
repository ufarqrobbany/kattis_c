#include <math.h>
#include <stdio.h>

int main() {
    int N, P, X, i;
    scanf("%d", &N);

    X = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &P);
        X += pow((P - (P % 10)) / 10, (P % 10));
    }

    printf("%d", X);
    return 0;
}