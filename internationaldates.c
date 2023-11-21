#include <stdio.h>

int main() {
    char Date[10];
    int A = 0, B = 0, C = 0;
    int i, j;

    scanf("%s", Date);

    j = 10;
    for (i = 0; i < 2; i++) {
        A += (Date[i] - '0') * j;
        j = j / 10;
    }

    j = 10;
    for (i = 3; i < 5; i++) {
        B += (Date[i] - '0') * j;
        j = j / 10;
    }

    j = 1000;
    for (i = 6; i < 10; i++) {
        C += (Date[i] - '0') * j;
        j = j / 10;
    }

    if (A <= 12 && B <= 12) {
        printf("either");
    } else if (A > 12) {
        printf("EU");
    } else {
        printf("US");
    }

    return 0;
}