#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    if (A + B == C) {
        printf("correct!");
    } else {
        printf("wrong!");
    }

    return 0;
}