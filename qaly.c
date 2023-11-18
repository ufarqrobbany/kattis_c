#include <stdio.h>

int main() {
    int N, i;
    float q[100], y[100];
    double qaly;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%f %f", &q[i], &y[i]);
    }

    for (i = 0; i < N; i++) {
        qaly += q[i] * y[i];
    }

    printf("%lf", qaly);

    return 0;
}