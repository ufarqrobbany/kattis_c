#include <stdio.h>
#include <string.h>

int main() {
    char text[160];
    int status[2] = {0, 0};

    scanf("%[^\n]", text);
    for (int i = 0; i < strlen(text) - 1; i++) {
        if ((text[i] == ':') && (text[i + 1] == ')')) {
            status[0]++;
        } else if ((text[i] == ':') && (text[i + 1] == '(')) {
            status[1]++;
        }
    }
    if ((status[0] > 0) && (status[1] > 0)) {
        printf("double agent");
    } else if (status[0] > 0) {
        printf("alive");
    } else if (status[1] > 0) {
        printf("undead");
    } else {
        printf("machine");
    }

    return 0;
}