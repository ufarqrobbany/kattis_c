#include <stdio.h>

int main() {
    char cipher[301];
    int sum = 0, i = 0;

    scanf("%s", cipher);

    while (cipher[i]) {
        if (cipher[i++] != 'P') sum++;
        if (cipher[i++] != 'E') sum++;
        if (cipher[i++] != 'R') sum++;
    }

    printf("%d", sum);

    return 0;
}
