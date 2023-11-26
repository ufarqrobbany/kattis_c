#include <math.h>
#include <stdio.h>

int main() {
    float s1, s2, s3, s4, x, area;

    scanf("%f %f %f %f", &s1, &s2, &s3, &s4);
    x = (s1 + s2 + s3 + s4) / 2;
    area = sqrt((x - s1) * (x - s2) * (x - s3) * (x - s4));
    printf("%f", area);

    return 0;
}