#include <stdio.h>
#include <string.h>

int main() {
    int n, length;
    char line1[500][50];
    char line2[500][50];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", line1[i]);
        scanf("%s", line2[i]);
        printf("%s\n", line1[i]);
        printf("%s\n", line2[i]);
        length = (strlen(line1[i]) > strlen(line2[i])) ? strlen(line1[i]) : strlen(line2[i]);
        for (int j = 0; j < length; j++) {
            if (line1[i][j] == line2[i][j]) {
                printf(".");
            } else {
                printf("*");
            }
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}