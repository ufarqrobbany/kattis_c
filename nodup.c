#include <stdio.h>
#include <string.h>

int main() {
    char input[80];
    char words[80][80];
    int i, j, k, isDuplicate;

    // masukkan kalimat
    scanf("%[^\n]", input);

    j = 0;
    k = 0;

    // pisahkan tiap kata
    for (i = 0; i <= strlen(input); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            words[j][k] = input[i];
            k++;
        } else if (input[i] == ' ' || input[i] == '\0') {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
    }

    // cek setiap kata apakah ada yang sama
    isDuplicate = 0;
    for (i = 0; i < j; i++) {
        for (k = 0; k < j; k++) {
            if ((i != k) && (strcmp(words[i], words[k]) == 0)) {
                isDuplicate = 1;
                break;
            }
        }
    }

    if (isDuplicate == 0) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
