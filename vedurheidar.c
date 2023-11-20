#include <stdio.h>

int main() {
    int v, n, k[100], i;
    char s[100][200];

    scanf("%d %d", &v, &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", s[i], &k[i]);
    }
    for (i = 0; i < n; i++) {
        if (k[i] < v) {
            printf("%s lokud\n", s[i]);
        } else {
            printf("%s opin\n", s[i]);
        }
    }

    return 0;
}