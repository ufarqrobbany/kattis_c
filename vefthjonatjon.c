#include <stdio.h>

int main() {
    int n, cpu, mem, hdd, i;
    char c, m, h;

    scanf("%d", &n);

    cpu = 0;
    mem = 0;
    hdd = 0;

    for (i = 0; i < n; i++) {
        scanf(" %c %c %c", &c, &m, &h);
        if (c == 'J') cpu++;
        if (m == 'J') mem++;
        if (h == 'J') hdd++;
    }

    if (cpu <= mem) {
        if (cpu <= hdd) {
            printf("%d", cpu);
        } else {
            printf("%d", hdd);
        }
    } else if (mem < cpu) {
        if (mem <= hdd) {
            printf("%d", mem);
        } else {
            printf("%d", hdd);
        }
    }

    return 0;
}
