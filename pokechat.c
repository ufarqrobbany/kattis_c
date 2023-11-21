#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    char l[1000];
    char chunk[4];
    int h;

    scanf("%[^\n]", S);
    scanf("%s", l);

    for (int i = 0; i < strlen(l); i += 3) {
        for (int j = 0; j < 3; j++) {
            chunk[j] = l[i + j];
        }
        h = ((chunk[0] - '0') * 100) + ((chunk[1] - '0') * 10) + (chunk[2] - '0');
        printf("%c", S[h - 1]);
    }

    return 0;
}