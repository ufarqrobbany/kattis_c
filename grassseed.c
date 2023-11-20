#include <stdio.h>

int main() {
    float C, L, w, l, t = 0;

    scanf("%f", &C);
    scanf("%f", &L);
    for (int i = 0; i < L; i++) {
        scanf("%f %f", &w, &l);
        t += w * l;
    }
    t *= C;
    printf("%f", t);

    return 0;
}