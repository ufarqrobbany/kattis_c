#include <stdio.h>

int main() {
    int N;
    float a[10000], b[10000], c[10000], an, bn, cn;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &a[i], &b[i], &c[i]);
    }

    for (int j = 0; j < N; j++) {
        an = a[j];
        bn = b[j];
        cn = c[j];

        float tolerance = 0.0001;

        if (fabs(an + bn - cn) < tolerance ||
            fabs(an - bn - cn) < tolerance ||
            fabs(bn - an - cn) < tolerance) {
            printf("Possible \n");
        } else if (fabs(an * bn - cn) < tolerance ||
                   fabs(an / bn - cn) < tolerance ||
                   fabs(bn / an - cn) < tolerance) {
            printf("Possible \n");
        } else {
            printf("Impossible \n");
        }
    }

    return 0;
}