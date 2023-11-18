#include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);
    scanf("%d", &m);

    while (n >= m) {
        n -= m;
    }

    printf("%d", n);

    return 0;
}