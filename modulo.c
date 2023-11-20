#include <stdio.h>

int main() {
    int n[10], M[42] = {0}, c = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n[i]);

        int m = n[i] % 42;
        if (M[m] == 0) {
            c++;
            M[m] = 1;
        }
    }
    printf("%d", c);

    return 0;
}