#include <stdio.h>
int main() {
    int n, k, currentYear;

    scanf("%d", &n);
    scanf("%d", &k);

    currentYear = 2022 + (n + k - 1) / k;

    printf("%d", currentYear);

    return 0;
}