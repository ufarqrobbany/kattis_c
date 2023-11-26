#include <math.h>
#include <stdio.h>

int main() {
    int h, v;
    double l;

    scanf("%d", &h);
    scanf("%d", &v);

    l = ceil(h / sin(M_PI * v / 180));

    printf("%d", (int)l);

    return 0;
}