#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, d;
    char n[10];
    int harshad = 0;

    scanf("%s", n);

    d = atoi(n);
    while (!harshad) {
        h = 0;
        for (int i = 0; n[i] != '\0'; i++) {
            h += n[i] - '0';
        }
        if (d % h == 0) {
            harshad = 1;
        } else {
            d++;
            sprintf(n, "%d", d);
        }
    }

    printf("%d", d);

    return 0;
}
