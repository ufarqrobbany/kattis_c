#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int m;

    scanf("%s", s);

    m = -1;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a') {
            m = i;
            break;
        }
    }
    if (m != -1) {
        printf("%s", &s[m]);
    }

    return 0;
}
