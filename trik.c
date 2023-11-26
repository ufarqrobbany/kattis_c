#include <stdio.h>
#include <string.h>

void swap(int *A, int *B) {
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

int main() {
    int cup[3] = {1, 0, 0}, temp, i;
    char move[50];

    scanf("%s", move);

    for (i = 0; i < strlen(move); i++) {
        if (move[i] == 'A') swap(&cup[0], &cup[1]);
        if (move[i] == 'B') swap(&cup[1], &cup[2]);
        if (move[i] == 'C') swap(&cup[0], &cup[2]);
    }

    for (i = 0; i < 3; i++) {
        if (cup[i] == 1) {
            printf("%d", i + 1);
        }
    }

    return 0;
}