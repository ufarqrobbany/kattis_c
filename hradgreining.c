#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    char DNA[1000];
    bool valid;

    scanf("%s", &DNA);

    for (int i = 0; i < strlen(DNA); i++) {
        if ((DNA[i - 2] == 'C') && (DNA[i - 1] == 'O') && (DNA[i] == 'V')) {
            valid = true;
            break;
        } else {
            valid = false;
        }
    }

    if (valid) {
        printf("Veikur!");
    } else {
        printf("Ekki veikur!");
    }

    return 0;
}