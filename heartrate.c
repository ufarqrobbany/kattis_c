#include <stdio.h>

int main() {
    int N, b[1000], i;
    double p[1000], min_ABPM, BPM, max_ABPM, B;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %lf", &b[i], &p[i]);
    }
    for (i = 0; i < N; i++) {
        B = (60 / 15) * (15 / p[i]);
        BPM = (60 * b[i]) / p[i];
        min_ABPM = BPM - B;
        max_ABPM = BPM + B;
        printf("%.4lf %.4lf %.4lf\n", min_ABPM, BPM, max_ABPM);
    }

    return 0;
}