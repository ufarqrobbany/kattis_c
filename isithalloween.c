#include <stdio.h>
#include <string.h>

int main() {
    char M[7];

    fgets(M, sizeof(M), stdin);
    if ((strcmp(M, "OCT 31") == 0) || (strcmp(M, "DEC 25") == 0)) {
        printf("yup");
    } else {
        printf("nope");
    }

    return 0;
}
