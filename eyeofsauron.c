#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    int m = 0, o = 0;

    scanf("%s", n);
    for (int i = 0; i < strlen(n); i++) {
        if (n[i] == '(') {
            break;
        }
        m++;
    }
    for (int i = m + 2; i < strlen(n); i++) {
        o++;
    }

    if (m == o) {
        printf("correct");
    } else {
        printf("fix");
    }

    return 0;
}