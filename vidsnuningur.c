#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];

    scanf("%s", &text);
    for (int i = strlen(text) - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    return 0;
}