#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
    if (N % 2 == 0) {
        printf("second");
    } else {
        printf("first");
    }

    return 0;
}