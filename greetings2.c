#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], r[2000];
    int length_s, length_r;

    scanf("%s", s);

    length_s = strlen(s);
    length_r = 0;
    for (int i = 0; i < length_s; i++) {
        if (s[i] == 'e') {
            r[length_r++] = s[i];
        }
        r[length_r++] = s[i];
    }
    r[length_r] = '\0';

    printf("%s", r);
    return 0;
}