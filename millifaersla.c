#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c) {
        printf("Monnei");
    } else if (b < a && b < c) {
        printf("Fjee");
    } else {
        printf("Dolladollabilljoll");
    }

    return 0;
}