#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, Q, command, C, X, A, B, i;

    scanf("%d %d", &N, &Q);

    // error kalo array location di-deklarasiin diatas dengan maksimal panjang elemen yang ditentuin, misal 1000. Padahal hasilnya sama aja
    int location[N + 1];

    for (i = 1; i <= N; i++) {
        scanf("%d", &location[i]);
    }

    for (i = 0; i < Q; i++) {
        scanf("%d", &command);

        if (command == 1) {
            scanf("%d %d", &C, &X);
            location[C] = X;
        } else if (command == 2) {
            scanf("%d %d", &A, &B);
            printf("%d\n", abs(location[A] - location[B]));
        }
    }

    return 0;
}