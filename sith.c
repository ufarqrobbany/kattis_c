#include <stdio.h>

int main() {
    char name[40];
    int a, b, c, a_b;

    scanf("%[^\n]", name);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    a_b = a - b;

    if ((a_b < 0) && (c < 0)) {
        printf("JEDI");
    } else if ((a_b < 0) && (c > 0)) {
        printf("SITH");
    } else {
        printf("VEIT EKKI");
    }
    return 0;
}