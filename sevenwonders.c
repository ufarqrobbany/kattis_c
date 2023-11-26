#include <stdio.h>
#include <string.h>

int main() {
    char card[50];
    int T, C, G, s, i, point;

    scanf("%s", card);

    T = 0;
    C = 0;
    G = 0;
    for (i = 0; i < strlen(card); i++) {
        if (card[i] == 'T') T++;
        if (card[i] == 'C') C++;
        if (card[i] == 'G') G++;
    }

    point = (T * T) + (C * C) + (G * G);

    s = T;

    if (C < s) {
        s = C;
    }

    if (G < s) {
        s = G;
    }

    point += 7 * s;

    printf("%d", point);

    return 0;
}