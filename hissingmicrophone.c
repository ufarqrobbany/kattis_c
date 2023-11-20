#include <stdio.h>
#include <string.h>

int main() {
    char word[30];

    scanf("%s", word);
    for (int i = 0; i < strlen(word) - 1; i++) {
        if ((word[i] == 's') && (word[i + 1] == 's')) {
            printf("hiss");
            return 0;
        }
    }
    printf("no hiss");

    return 0;
}