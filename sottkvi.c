#include <stdio.h>

int main() {
    int n, k, d, fp, di, i;

    scanf("%d %d %d", &n, &k, &d);

    fp = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &di);
        if ((14 + di) <= (k + d)) fp++;
    }

    printf("%d", fp);

    return 0;
}