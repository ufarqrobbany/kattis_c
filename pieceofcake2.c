#include <stdio.h>

int main() {
    int n, h, v, bh, bv, bV;

    scanf("%d %d %d", &n, &h, &v);
    bh = (n - h > h) ? n - h : h;
    bv = (n - v > v) ? n - v : v;
    bV = bh * bv * 4;
    printf("%d", bV);

    return 0;
}