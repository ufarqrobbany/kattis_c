#include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);

    if (n >= 5550000 && n <= 5559999) {
        m = 1;
    } else {
        m = 0;
    }

    printf("%d", m);

    return 0;
}