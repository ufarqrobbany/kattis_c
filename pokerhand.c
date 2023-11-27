#include <stdio.h>

int main() {
    char card[5][3], rank;
    int str[13] = {0}, max, i;

    for (i = 0; i < 5; i++) {
        scanf(" %2s", card[i]);
    }

    for (i = 0; i < 5; i++) {
        rank = card[i][0];
        if (rank >= '2' && rank <= '9') {
            str[rank - '0' - 1]++;
        } else {
            switch (rank) {
                case 'T':
                    str[9]++;
                    break;
                case 'J':
                    str[10]++;
                    break;
                case 'Q':
                    str[11]++;
                    break;
                case 'K':
                    str[12]++;
                    break;
                case 'A':
                    str[0]++;
                    break;
            }
        }
    }

    max = str[0];
    for (i = 0; i < 13; i++) {
        if (str[i] > max) {
            max = str[i];
        }
    }

    printf("%d", max);

    return 0;
}
