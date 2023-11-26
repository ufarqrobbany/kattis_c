#include <stdio.h>
#include <string.h>

int main() {
    char name[250];

    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++) {
        if (name[i] != name[i + 1]) {
            printf("%c", name[i]);
        }
    }

    return 0;
}