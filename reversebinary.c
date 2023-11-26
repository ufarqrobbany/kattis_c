#include <math.h>
#include <stdio.h>

int main() {
    long int N, RN = 0;
    int B[32], i = 0, j, r;

    (void)scanf("%ld", &N);

    if (N >= 1 && N <= 1000000000) {
        while (N > 0) {
            B[i] = N % 2;
            N = N / 2;
            i++;
        }

        for (j = i - 1; j >= 0; j--) {
            r = B[j];
            RN += r * pow(2, i - 1 - j);
        }

        printf("%ld", RN);
    }

    return 0;
}