#include <stdio.h>

int main() {
    char word[15];

    scanf("%s", word);
    for (int i = 0; i < 3; i++) {
        printf("%s", word);
        if (i < 2) {
            printf(" ");
        }
    }

    return 0;
}