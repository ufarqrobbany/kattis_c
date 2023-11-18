#include <stdio.h>

int main() {
    char input[101];
    char singkatan[101];
    int singkatanIndex = 0;

    scanf("%s", &input);

    singkatan[singkatanIndex++] = input[0];
    for (int i = 1; input[i] != '\0'; i++) {
        if (input[i] == '-') {
            singkatan[singkatanIndex++] = input[i + 1];
        }
    }
    singkatan[singkatanIndex] = '\0';

    printf("%s", singkatan);

    return 0;
}