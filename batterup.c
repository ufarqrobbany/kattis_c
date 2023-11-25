#include <stdio.h>

int main() {
    int n, a;
    float an, b, c;

    scanf("%d", &n);

    an = 0;
    b = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a >= 0) {
            b += a;
            an++;
        }
    }

    c = b / an;

    printf("%f", c);

    return 0;
}