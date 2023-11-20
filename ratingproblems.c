#include <stdio.h>

int main() {
    int n, k, r = 0;
    float min_r, max_r;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &r);
        max_r += r;
    }
    min_r = max_r;
    max_r = (max_r + (n - k) * 3) / n;
    min_r = (min_r + (n - k) * -3) / n;
    printf("%f %f", min_r, max_r);

    return 0;
}