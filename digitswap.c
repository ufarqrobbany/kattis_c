#include <stdio.h>

int main() {
    char digit[2], temp;

    scanf("%s", digit);

    temp = digit[0];
    digit[0] = digit[1];
    digit[1] = temp;

    printf("%s", digit);

    return 0;
}