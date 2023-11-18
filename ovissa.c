#include <stdio.h>
#include <string.h>

int main() {
    char sound[100000];
    int i, uncertainty;

    scanf("%s", &sound);

    uncertainty = 0;
    for (i = 0; i < strlen(sound); i++) {
        if (sound[i] == 'u') {
            uncertainty++;
        }
    }

    printf("%d", uncertainty);

    return 0;
}