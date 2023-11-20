#include <stdio.h>

int main() {
    char A[3], B[3];
    int Ai = 0, Bi = 0;

    scanf("%s %s", A, B);

    int j = 100;
    for (int i = 2; i >= 0; i--) {
        Ai += (A[i] - '0') * j;
        Bi += (B[i] - '0') * j;
        j = j / 10;
    }

    if (Ai > Bi) {
        printf("%d", Ai);
    } else {
        printf("%d", Bi);
    }

    return 0;
}