#include <stdio.h>

int main() {
    int R, C, parking, cars, squashes, number_cars;
    char arr[50][50];
    int i, j, k, l;

    scanf("%d %d", &R, &C);

    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    for (number_cars = 0; number_cars <= 4; number_cars++) {
        squashes = 0;
        for (i = 0; i < R - 1; i++) {
            for (j = 0; j < C - 1; j++) {
                parking = 0;
                cars = 0;

                for (k = 0; k < 2; k++) {
                    for (l = 0; l < 2; l++) {
                        if (arr[i + k][j + l] == 'X') {
                            cars++;
                        } else if (arr[i + k][j + l] == '.') {
                            parking++;
                        }
                    }
                }

                if (cars + parking == 4 && cars == number_cars) {
                    squashes++;
                }
            }
        }

        printf("%d\n", squashes);
    }

    return 0;
}
