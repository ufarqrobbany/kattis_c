#include <stdio.h>

int main() {
    int n, r[100], e[100], c[100], i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &r[i], &e[i], &c[i]);
    }
    for (i = 0; i < n; i++) {
        if (r[i] + c[i] == e[i]) {
            printf("does not matter\n");
        } else if (r[i] + c[i] > e[i]) {
            printf("do not advertise\n");
        } else {
            printf("advertise\n");
        }
    }

    return 0;
}