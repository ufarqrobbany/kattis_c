#include <math.h>
#include <stdio.h>

int main() {
    // x(t) = v t cos(theta)
    // y(t) = v t sin(theta) - 1/2 g t^2
    // t = x / (v cos(theta));

    int N, i;
    double v, theta, x, h1, h2, t, y;
    const double g = 9.81;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%lf %lf %lf %lf %lf", &v, &theta, &x, &h1, &h2);
        theta = theta * M_PI / 180;  // konversi ke radian

        t = x / (v * cos(theta));
        y = v * t * sin(theta) - 0.5 * g * (t * t);

        if ((y >= h1 + 1) && (y <= h2 - 1)) {
            printf("Safe\n");
        } else {
            printf("Not Safe\n");
        }
    }
}