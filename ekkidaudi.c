#include <stdio.h>
#include <string.h>

int main() {
    char line1[2100];
    char line2[2100];
    int index1 = 0, index2 = 0;

    scanf("%[^\n]", line1);
    scanf(" %[^\n]", line2);

    for (int i = 0; i < strlen(line1); i++) {
        if ((line1[i] != '|')) {
            printf("%c", line1[i]);
            index1++;
        } else if ((line1[i] == '|')) {
            break;
        }
    }

    for (int i = 0; i < strlen(line2); i++) {
        if ((line2[i] != '|')) {
            printf("%c", line2[i]);
            index2++;
        } else if ((line2[i] == '|')) {
            break;
        }
    }

    printf(" ");

    for (int i = index1; i < strlen(line1); i++) {
        if ((line1[i] != '|')) {
            printf("%c", line1[i]);
            index1++;
        }
    }

    for (int i = index2; i < strlen(line2); i++) {
        if ((line2[i] != '|')) {
            printf("%c", line2[i]);
            index2++;
        }
    }

    return 0;
}