#include <stdio.h>

int main() {
    char CPR[11];
    int c[11] = {4, 3, 2, 7, 6, 5, 0, 4, 3, 2, 1};
    int sum = 0;

    scanf("%s", CPR);
    for (int i = 0; i < 11; i++) {
        if (CPR[i] != '-') {
            sum += (CPR[i] - '0') * c[i];
        }
    }
    if (sum % 11 == 0) {
        printf("%d", 1);
    } else {
        printf("%d", 0);
    }

    return 0;
}