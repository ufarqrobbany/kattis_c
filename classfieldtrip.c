#include <stdio.h>
#include <string.h>

void swap(char *A, char *B) {
    char temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

void sortAsc(char (*arr)[200], int length_arr) {
    for (int i = 0; i < length_arr; i++) {
        for (int j = i + 1; j < length_arr; j++) {
            if ((*arr)[i] > (*arr)[j]) {
                swap(&(*arr)[i], &(*arr)[j]);
            }
        }
    }
}

int main() {
    char ann[100], ben[100], merge[200];
    int length_a, length_b, length_merge;

    scanf("%s %s", ann, ben);

    strcpy(merge, ann);

    length_a = strlen(ann);
    length_b = strlen(ben);
    length_merge = length_a + length_b;

    for (int i = 0; i < length_b; i++) {
        merge[length_a + i] = ben[i];
    }

    merge[length_merge] = '\0';

    sortAsc(merge, length_merge);

    printf("%s", merge);

    return 0;
}
