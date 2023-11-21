#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    int v;
    char s[80];

    scanf("%[^\n]", s);

    v = 0;
    for (int i = 0; i < strlen(s); i++) {
        switch (tolower(s[i])) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                v++;
                break;
            default:
                break;
        }
    }

    printf("%d", v);

    return 0;
}