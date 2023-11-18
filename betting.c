#include <stdio.h>

int main() {
    float a, percentage_two, ratio_one, ratio_two;

    scanf("%f", &a);

    percentage_two = 100 - a;
    ratio_one = 1 + percentage_two / a;
    ratio_two = 1 + a / percentage_two;

    printf("%f \n", ratio_one);
    printf("%f", ratio_two);

    return 0;
}