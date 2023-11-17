#include <stdio.h>
#include <string.h>

int main() {
    char sound[100000];
    scanf("%s", &sound);
    int j = 0;
    for (int i = 0; i < strlen(sound); i++) {
        j += 1;
    }
    printf("%d\n", j);
    return 0;
}